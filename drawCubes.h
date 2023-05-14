//
// Created by vadim on 14.05.23.
//
#pragma once
#ifndef RUBIK_S_CUBE_DRAWCUBES_H
#define RUBIK_S_CUBE_DRAWCUBES_H

void drawFromConsist(Cube cube) {
    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(0.5, -0.5, -0.49);
    glVertex3f(0.5, 0.5, -0.49);
    glVertex3f(-0.5, 0.5, -0.49);
    glVertex3f(-0.5, -0.5, -0.49);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0, 0, 0);
    glVertex3f(0.5, -0.5, 0.49);
    glVertex3f(0.5, 0.5, 0.49);
    glVertex3f(-0.5, 0.5, 0.49);
    glVertex3f(-0.5, -0.5, 0.49);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(0.49, -0.5, -0.5);
    glVertex3f(0.49, 0.5, -0.5);
    glVertex3f(0.49, 0.5, 0.5);
    glVertex3f(0.49, -0.5, 0.5);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(-0.49, -0.5, -0.5);
    glVertex3f(-0.49, 0.5, -0.5);
    glVertex3f(-0.49, 0.5, 0.5);
    glVertex3f(-0.49, -0.5, 0.5);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(0.5, -0.49, -0.5);
    glVertex3f(0.5, -0.49, 0.5);
    glVertex3f(-0.5, -0.49, 0.5);
    glVertex3f(-0.5, -0.49, -0.5);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(0.5, 0.49, -0.5);
    glVertex3f(0.5, 0.49, 0.5);
    glVertex3f(-0.5, 0.49, 0.5);
    glVertex3f(-0.5, 0.49, -0.5);
    glEnd();

    for (int j = 0; j < 3; ++j)
        for (int i = 0; i < 3; ++i) {
            glBegin(GL_POLYGON);
            glColor3f(cube.front[i][j].r, cube.front[i][j].g, cube.front[i][j].b);
            glVertex3f(-0.5 + i * 0.34, 0.5 - j * 0.34, -0.5);
            glVertex3f(-0.5 + i * 0.34, 0.18 - j * 0.34, -0.5);
            glVertex3f(-0.18 + i * 0.34, 0.18 - j * 0.34, -0.5);
            glVertex3f(-0.18 + i * 0.34, 0.5 - j * 0.34, -0.5);
            glEnd();

            glBegin(GL_POLYGON);
            glColor3f(cube.back[i][j].r, cube.back[i][j].g, cube.back[i][j].b);
            glVertex3f(-0.5 + i * 0.34, 0.5 - j * 0.34, 0.5);
            glVertex3f(-0.5 + i * 0.34, 0.18 - j * 0.34, 0.5);
            glVertex3f(-0.18 + i * 0.34, 0.18 - j * 0.34, 0.5);
            glVertex3f(-0.18 + i * 0.34, 0.5 - j * 0.34, 0.5);
            glEnd();

            glBegin(GL_POLYGON);
            glColor3f(cube.left[i][j].r, cube.left[i][j].g, cube.left[i][j].b);
            glVertex3f(0.5, -0.5 + i * 0.34, -0.5 + j * 0.34);
            glVertex3f(0.5, -0.5 + i * 0.34, -0.18 + j * 0.34);
            glVertex3f(0.5, -0.18 + i * 0.34, -0.18 + j * 0.34);
            glVertex3f(0.5, -0.18 + i * 0.34, -0.5 + j * 0.34);
            glEnd();

            glBegin(GL_POLYGON);
            glColor3f(cube.right[i][j].r, cube.left[i][j].g, cube.left[i][j].b);
            glVertex3f(-0.5, -0.5 + i * 0.34, -0.5 + j * 0.34);
            glVertex3f(-0.5, -0.5 + i * 0.34, -0.18 + j * 0.34);
            glVertex3f(-0.5, -0.18 + i * 0.34, -0.18 + j * 0.34);
            glVertex3f(-0.5, -0.18 + i * 0.34, -0.5 + j * 0.34);
            glEnd();

            glBegin(GL_POLYGON);
            glColor3f(cube.down[i][j].r, cube.down[i][j].g, cube.down[i][j].b);
            glVertex3f(-0.5 + i * 0.34, -0.5, -0.5 + j * 0.34);
            glVertex3f(-0.18 + i * 0.34, -0.5, -0.5 + j * 0.34);
            glVertex3f(-0.18 + i * 0.34, -0.5, -0.18 + j * 0.34);
            glVertex3f(-0.5 + i * 0.34, -0.5, -0.18 + j * 0.34);
            glEnd();

            glBegin(GL_POLYGON);
            glColor3f(cube.up[i][j].r, cube.up[i][j].g, cube.up[i][j].b);
            glVertex3f(-0.5 + i * 0.34, 0.5, -0.5 + j * 0.34);
            glVertex3f(-0.18 + i * 0.34, 0.5, -0.5 + j * 0.34);
            glVertex3f(-0.18 + i * 0.34, 0.5, -0.18 + j * 0.34);
            glVertex3f(-0.5 + i * 0.34, 0.5, -0.18 + j * 0.34);
            glEnd();

        }
}

#endif //RUBIK_S_CUBE_DRAWCUBES_H

