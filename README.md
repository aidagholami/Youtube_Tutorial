# OpenGl_BoilerPlate
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
