//
//  main.cpp
//  YoutubeTutorial
//
//  Created by aida gholami on 12/5/21.
//

#include "HeaderFiles/libs.h"


int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    
    GLFWwindow* window;
    if (!glfwInit()) {
        return -1;
    }
    window = glfwCreateWindow(640, 480, "Hello World", NULL, NULL);
    
    if (!window) {
        glfwTerminate();
        return -1;
    }
    glfwMakeContextCurrent(window);
    
    while(!glfwWindowShouldClose(window)) {
        glClear(GL_COLOR_BUFFER_BIT);
        
        glfwSwapBuffers(window);
        
        glfwPollEvents();
    }
    
    glfwTerminate();
    return 0;
}
