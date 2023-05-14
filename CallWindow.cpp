//
// Created by vadim on 14.05.23.
//

#include "CallWindow.h"
#include "drawCubes.h"
#include "Cube.h"

GLfloat rotate_x = 0;
GLfloat rotate_y = 0;
Cube CallWindow::cube;

CallWindow::CallWindow(int argc, char **argv, Cube cuber) {
    this->argc = argc;
    this->argv = argv;
    CallWindow::cube = cuber;

}

void CallWindow::display() {
    //Clear all pixels
    //Clear screen and Z-buffer
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    // Reset transformations
    glLoadIdentity();


    // Rotate when user changes rotate_x and rotate_y
    glRotatef(rotate_x, 1.0, 0.0, 0.0);
    glRotatef(rotate_y, 0.0, 1.0, 0.0);


    drawFromConsist(cube);

    glFlush();
    glutSwapBuffers();

}

// ----------------------------------------------------------
// specialKeys() Callback Function
// ----------------------------------------------------------
void CallWindow::specialKeys(int key, int x, int y) {

    if (key == GLUT_KEY_RIGHT)
        rotate_y += 5;
    else if (key == GLUT_KEY_LEFT)
        rotate_y -= 5;
    else if (key == GLUT_KEY_UP)
        rotate_x += 5;
    else if (key == GLUT_KEY_DOWN)
        rotate_x -= 5;
    else if (key == GLUT_KEY_F1)
        cube.U();
    else if (key == GLUT_KEY_F6)
        cube.D();
    else if (key == GLUT_KEY_F7)
        cube.U_();
    else if (key == GLUT_KEY_F12)
        cube.D_();
    else if (key == GLUT_KEY_F2)
        cube.F();
    else if (key == GLUT_KEY_F5)
        cube.B();
    else if (key == GLUT_KEY_F8)
        cube.F_();
    else if (key == GLUT_KEY_F11)
        cube.B_();
    else if (key == GLUT_KEY_F3)
        cube.R();
    else if (key == GLUT_KEY_F4)
        cube.L();
    else if (key == GLUT_KEY_F9)
        cube.R_();
    else if (key == GLUT_KEY_F10)
        cube.L_();
    glutPostRedisplay();

}

void CallWindow::init() {
    //select clearing (background) color
    glClearColor(0.0, 0.0, 0.0, 0.0);

    //initialize viewing values
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0.0, 1.0, 0.0, 1.0, -1.0, 1.0);
}

void CallWindow::startWindow() {
    glutInit(&argc, argv);

    //  Request double buffered true color window with Z-buffer
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);

    // Create window
    glutCreateWindow("Awesome Cube");

    //  Enable Z-buffer depth test
    glEnable(GL_DEPTH_TEST);

    // Callback functions
    glutDisplayFunc(display);
    glutSpecialFunc(specialKeys);
    //  Pass control to GLUT for events
    glutMainLoop();
}

