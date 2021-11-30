/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minirt.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmkrtchy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 17:34:59 by tmkrtchy          #+#    #+#             */
/*   Updated: 2021/04/14 17:44:56 by tmkrtchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minirt.h"
#include "../includes/scene.h"

void	send_rays(t_info *info, int save)
{
	int		x;
	int		y;
	int		color;
	t_pixel	**buffer;

	x = 0;
	y = 0;
	buffer = create_buffer(info->scene->height, info->scene->width);
	while (y < info->scene->height)
	{
		x = 0;
		while (x < info->scene->width)
		{
			color = get_color(info->scene, ray_to_pixel(x, y, info->scene));
			if (save)
				buffer[y][x] = pix_from_int(color);
			else
				info->image.addr[y * info->scene->width + x] = color;
			x++;
		}
		y++;
	}
	if (save)
		write_bmp("file.bmp", info->scene->width, info->scene->height, buffer);
	free_buffer(buffer, info->scene->height);
}

void	render(int camera_number, t_info *info, int save)
{
	int cameras_available;

	cameras_available = ft_lstsize(info->scene->cameras);
	info->scene->selected_camera = camera_number % cameras_available;
	send_rays(info, save);
	if (save == 0)
		mlx_put_image_to_window(info->id, info->window, info->image.img, 0, 0);
}

int		rerender(int key, t_info *info, t_camera cam)
{
	if (key == 124)
		info->camera_number += 1;
	else if (key == 123)
		info->camera_number -= 1;
	else if (key == 31)
		cam.origin.z -= 1;
	else if (key == 34)
		cam.origin.z += 1;
	else if (key == 53)
		exit(0);
	render(info->camera_number, info, 0);
	return (0);
}

int		w_close(t_info *info)
{
	mlx_destroy_window(info->id, info->window);
	exit(0);
}

void	minirt(char *filename, int save)
{
	t_info info;

	info.scene = parse_file(filename);
	info.camera_number = 0;
	if (save == 1)
	{
		render(0, &info, 1);
		return ;
	}
	info.id = mlx_init();
	info.window = mlx_new_window(info.id, info.scene->width,
									info.scene->height, "miniRT");
	info.image.img = mlx_new_image(info.id, info.scene->width,
										info.scene->height);
	info.image.addr = (int *)mlx_get_data_addr(info.image.img,
		&(info.image.bits_per_pixel), &(info.image.line_length),
		&(info.image.endian));
	mlx_hook(info.window, 17, 0, w_close, &info);
	mlx_key_hook(info.window, rerender, &info);
	render(0, &info, save);
	mlx_loop(info.id);
}
