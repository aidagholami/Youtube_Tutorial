//
//  libs.h
//  YoutubeTutorial
//
//  Created by aida gholami on 12/5/21.
//

#ifndef libs_h
#define libs_h

// standard c++ libraries
#include <iostream>
#include <fstream>
#include <string>
#include <vector>

// Third parties libraries
#include <GL/glew.h>
#include <GLFW/glfw3.h>

#include <glm/glm.hpp>
#include <glm/vec2.hpp>
#include <glm/vec3.hpp>
#include <glm/vec4.hpp>
#include <glm/mat4x4.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>

#include "SOIL2.h"

struct Vertex {
    glm::vec3 position;
    glm::vec3 color;
    glm::vec2 texcoord;
};

#endif /* libs_h */
