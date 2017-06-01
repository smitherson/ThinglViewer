#pragma once
#include <stdlib.h>

// Include GLEW
#include <GL/glew.h>

// Include GLFW
#include <glfw3.h>

// Include GLM
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>

class ThinglViewer {
  public:
    void testRender();
    bool initWindow(const char* windowName, const int width, const int height);
  protected:
    GLFWwindow* window;

    bool isGl21 = false;
    void computeMatricesFromInputs();
    //glm::mat4 getViewMatrix();
   // glm::mat4 getProjectionMatrix();
    glm::mat4 ViewMatrix;
    glm::mat4 ProjectionMatrix;

    // Initial position : on +Z
    glm::vec3 position = glm::vec3( 0, 0, 5 ); 
    // Initial horizontal angle : toward -Z
    float horizontalAngle = 3.14f;
    // Initial vertical angle : none
    float verticalAngle = 0.0f;
    // Initial Field of View
    float initialFoV = 45.0f;

    float speed = 35.0f; // 3 units / second
    float mouseSpeed = 0.005f;

};

