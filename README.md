# MiniRT (*Mini*mal *R*ay *T*racer)

My first RayTracer with miniLibX

This project is an introduction to the beautiful world of Raytracing.
Once completed you will be able to render simple Computer-Generated-Images and you
will never be afraid of implementing mathematical formulas again.

_This one's my favorite work._
![42](https://raw.githubusercontent.com/mkrtchyan-t/miniRT/main/examples/42_colorful.bmp)

## Installation

We need :
* On Linux : clang/gcc, Xlib (v11) and his extension (already installed on Ubuntu distros)
* On Mac OS : clang/gcc  
(you can change CC value in Makefile to set clang)  

### About .rt format

We have to run miniRT with a valid .rt file. Here is an example of valid *(and ugly)* .rt file.  

The school project subject defines how the input file must be formatted.

Each line defines one property or scene object, lines begin with uppercase letter  
mean a unique property and lowercase lines define a scene object:  
- **R** stands for image resolution. Here we have a resolution of 1920x1080
- **A** defines ambient light. It has a light ratio and a rgb code
- **c** places a camera, it is defined by :
	- his position vector
	- his orientation vector (sight-direction)
	- his field of view (FOV) in degrees
- **l** is an omnilight, its properties comprise :
	- a position vector
	- a light-ratio
	- a rgb code
- **pl** is a plane defined by :
	- his position vector
	- his orientation (one of their normals orientation)
	- his rgb color
- **sp** is a sphere, it is defined by :
	- a position vector
	- a diameter
	- an rgb color
- **sq** is a square with :
	- a position vector (one of his vertices)
	- an orientation vector
	- his side size
	- an rgb color
Actually, the subject underdefines the square, so i choose an arbitrary 2nd orientation vector,
and i planned to modify the file format to fix this flaw.
- **cy** places a cylinder with :
	- his position vector (i.e. his base center)
	- his axis orientation vector
	- his diameter
	- his height
- **tr** defines a triangle with his three vertices and his color.

If you want to create a scene, you have to pay attention at :
- vector format : f,f,f ; with f, an arbitrary float 
- rgb format : n,n,n ; with n in range [0,255]
- ratio : f, a float between [-1.0,1.0]
- fov is comprise between [0,180]
- each property must be separated by spaces/tabs

You can write empty lines and object order is meaningless, just don't forget
ambient and resolution. (If you dont like ambient light effect you can deactivate putting a 0 in ratio).

Enjoy ! 
