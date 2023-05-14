//
// Created by vadim on 14.05.23.
//
#pragma once
#include <cstdio>
#include <iostream>
#include <fstream>
#include <vector>
#include <cstring>
#include <ctime>
#include <cstdlib>
#include <GL/freeglut.h>
#ifndef RUBIK_S_CUBE_CUBECLASS_H
#define RUBIK_S_CUBE_CUBECLASS_H


struct rgbPairs{
    GLfloat r;
    GLfloat g;
    GLfloat b;
};

class Cube {
public:
    rgbPairs front[3][3];
    rgbPairs back[3][3];
    rgbPairs left[3][3];
    rgbPairs right[3][3];
    rgbPairs up[3][3];
    rgbPairs down[3][3];
    Cube(FILE *p);
    Cube();
    ~Cube() = default;

    void F();
    void B();
    void L();
    void R();
    void U();
    void D();
    void F_();
    void B_();
    void L_();
    void R_();
    void U_();
    void D_();

};


#endif //RUBIK_S_CUBE_CUBECLASS_H
