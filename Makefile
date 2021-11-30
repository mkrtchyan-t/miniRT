SRCS = srcs/bmp.c srcs/check_scene.c srcs/color3.c srcs/ft_split.c\
srcs/inter.c srcs/main.c srcs/parsing.c srcs/parsing2.c srcs/ray.c\
srcs/sphere.c srcs/vector.c srcs/buffer.c srcs/color.c srcs/cylinder.c\
srcs/get_next_line.c srcs/intersect.c srcs/matrix.c srcs/parsing_values.c\
srcs/plane.c srcs/shading.c srcs/square.c srcs/vector_math.c srcs/check_values.c\
srcs/color2.c srcs/ft_atoi.c srcs/get_next_line_utils.c srcs/list.c\
srcs/minirt.c srcs/parsing_objects.c srcs/discriminant.c srcs/specular.c\
srcs/triangle.c

OBJS = $(SRCS:.c=.o)

NAME = miniRT

CFLAGS = -Wall -Wextra -Werror

.PHONY: 	clean fclean all re bonus

all:		$(NAME)

.c.o:
			gcc $(CFLAGS) -c $< -o $@

$(NAME):	$(OBJS)
			gcc -o $(NAME) $(OBJS) $(CFLAGS) -lmlx -L./MinilibX -framework OpenGL -framework AppKit

clean:
			rm -f $(OBJS)

fclean: 	clean
			rm -f $(NAME)

re:			fclean all
