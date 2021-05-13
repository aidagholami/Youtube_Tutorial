# Youtube Tutorial
Working with OpenGL on Xcode

Install home-brew
Then install libraries needed for OpenGL to operate:
brew install glew
brew install glfw
brew install glm

Make sure your target in setting is your project name not the project itself

Change the ‘Build Settings’ for ‘Header Search Paths’ Add/Use the path that these libraries have been installed which is ‘/usr/local/include’

Change the ‘Build Phases’ for ‘Link Binary With Libraries’
1- Add OpenGl.framework
2- Add glew and glfw lib which lives in ‘/usr/local/Cellar’

* You don’t need to add glm’s lib because glam has no lib file, since you have installed it through brew, and you already have it in the project path through ‘/usr/local/include’ and you do have already access to it.


Installing SOIL2
Download SOIL2 from the repository (https://github.com/SpartanJ/SOIL2)
Go to the source file ‘src/SOIL2’ copy all the content and past it  in a folder in your project like below:
ProjectName/ProjectName/Linking/SOIL2


## Show the texture on the window:

For I/O in Xcode check Thi slink
https://www.youtube.com/watch?v=JM1D0yxAYHk

If you need to use external files in Xcode, you can either change the working directory in Product/Scheme/Edit Scheme/
Tick the working directory to your project. When you copy this project somewhere else the working directory won’t change by itself and your external files like(vertex.glsl and …) won’t work again.

Another way for using external files are using them in the ‘Products’ folder next to your Product(executable file of your project) So,
1- Open both external files folder and Products folder in finder and drag and drop the external files to the Products folder.
2- Delete the external removed files in your Xcode.
3- Open your Products folder in Finder and drop and drop your external files to the corresponding folder in your Xcode and do not copy them and use the ‘Create folder refrences’ option on.
