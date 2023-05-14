//
// Created by vadim on 14.05.23.
//

#ifndef CUBE_DRAWCUBES_H
#define CUBE_DRAWCUBES_H

void drawFromConsist() {}


void allWhite() {
    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(  0.5, -0.5, -0.49);
    glVertex3f(  0.5,  0.5, -0.49);
    glVertex3f( -0.5,  0.5, -0.49);
    glVertex3f( -0.5, -0.5, -0.49);
    glEnd();

    for (int j = 0; j < 3; ++j)
        for (int i = 0; i < 3; ++i) {
            glBegin(GL_POLYGON);
            glColor3f(1.0, 1.0, 1.0);
            glVertex3f(-0.5 + i * 0.34, 0.5 - j * 0.34, -0.5);
            glVertex3f(-0.5 + i * 0.34, 0.18 - j * 0.34, -0.5);
            glVertex3f(-0.18 + i * 0.34, 0.18 - j * 0.34, -0.5);
            glVertex3f(-0.18 + i * 0.34, 0.5 - j * 0.34, -0.5);
            glEnd();
        }
}

void allYellow() {
    glBegin(GL_POLYGON);
    glColor3f(0,0,0);
    glVertex3f(  0.5, -0.5, 0.49);
    glVertex3f(  0.5,  0.5, 0.49);
    glVertex3f( -0.5,  0.5, 0.49);
    glVertex3f( -0.5, -0.5, 0.49);
    glEnd();
    for (int j = 0; j < 3; ++j)
        for (int i = 0; i < 3; ++i) {
            glBegin(GL_POLYGON);
            glColor3f(1.0, 1.0, 0.0);
            glVertex3f(-0.5 + i * 0.34, 0.5 - j * 0.34, 0.5);
            glVertex3f(-0.5 + i * 0.34, 0.18 - j * 0.34, 0.5);
            glVertex3f(-0.18 + i * 0.34, 0.18 - j * 0.34, 0.5);
            glVertex3f(-0.18 + i * 0.34, 0.5 - j * 0.34, 0.5);
            glEnd();
        }
}

void allBlue() {
    glBegin(GL_POLYGON);
    glColor3f(  0.0,  0.0,  0.0 );
    glVertex3f( 0.49, -0.5, -0.5 );
    glVertex3f( 0.49,  0.5, -0.5 );
    glVertex3f( 0.49,  0.5,  0.5 );
    glVertex3f( 0.49, -0.5,  0.5 );
    glEnd();
    for (int j = 0; j < 3; ++j)
        for (int i = 0; i < 3; ++i) {
            glBegin(GL_POLYGON);
            glColor3f(0.0, 0.0, 1.0);
            glVertex3f(0.5, -0.5 + i * 0.34, -0.5 + j * 0.34);
            glVertex3f(0.5, -0.5 + i * 0.34, -0.18 + j * 0.34);
            glVertex3f(0.5, -0.18 + i * 0.34, -0.18 + j * 0.34);
            glVertex3f(0.5, -0.18 + i * 0.34, -0.5 + j * 0.34);
            glEnd();
        }
}

void allGreen() {
    glBegin(GL_POLYGON);
    glColor3f(  0.0,  0.0,  0.0 );
    glVertex3f( -0.49, -0.5, -0.5 );
    glVertex3f( -0.49,  0.5, -0.5 );
    glVertex3f( -0.49,  0.5,  0.5 );
    glVertex3f( -0.49, -0.5,  0.5 );
    glEnd();
    for (int j = 0; j < 3; ++j)
        for (int i = 0; i < 3; ++i) {
            glBegin(GL_POLYGON);
            glColor3f(0.0, 1.0, 0.0);
            glVertex3f(-0.5, -0.5 + i * 0.34, -0.5 + j * 0.34);
            glVertex3f(-0.5, -0.5 + i * 0.34, -0.18 + j * 0.34);
            glVertex3f(-0.5, -0.18 + i * 0.34, -0.18 + j * 0.34);
            glVertex3f(-0.5, -0.18 + i * 0.34, -0.5 + j * 0.34);
            glEnd();
        }
}

void allRed() {
    glBegin(GL_POLYGON);
    glColor3f(   0.0,  0.0,  0.0 );
    glVertex3f(  0.5, -0.49, -0.5 );
    glVertex3f(  0.5, -0.49,  0.5 );
    glVertex3f( -0.5, -0.49,  0.5 );
    glVertex3f( -0.5, -0.49, -0.5 );
    glEnd();
    for (int j = 0; j < 3; ++j)
        for (int i = 0; i < 3; ++i) {
            glBegin(GL_POLYGON);
            glColor3f(1.0, 0.0, 0.0);
            glVertex3f(-0.5 + i * 0.34, -0.5, -0.5 + j * 0.34);
            glVertex3f(-0.18 + i * 0.34, -0.5, -0.5 + j * 0.34);
            glVertex3f(-0.18 + i * 0.34, -0.5, -0.18 + j * 0.34);
            glVertex3f(-0.5 + i * 0.34, -0.5, -0.18 + j * 0.34);
            glEnd();
        }
}

void allOrange() {
    glBegin(GL_POLYGON);
    glColor3f(   0.0,  0.0,  0.0 );
    glVertex3f(  0.5, 0.49, -0.5 );
    glVertex3f(  0.5, 0.49,  0.5 );
    glVertex3f( -0.5, 0.49,  0.5 );
    glVertex3f( -0.5, 0.49, -0.5 );
    glEnd();
    for (int j = 0; j < 3; ++j)
        for (int i = 0; i < 3; ++i) {
            glBegin(GL_POLYGON);
            glColor3f(1.0, 0.65, 0.0);
            glVertex3f(-0.5 + i * 0.34, 0.5, -0.5 + j * 0.34);
            glVertex3f(-0.18 + i * 0.34, 0.5, -0.5 + j * 0.34);
            glVertex3f(-0.18 + i * 0.34, 0.5, -0.18 + j * 0.34);
            glVertex3f(-0.5 + i * 0.34, 0.5, -0.18 + j * 0.34);
            glEnd();
        }
    }

#endif //CUBE_DRAWCUBES_H

