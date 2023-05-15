//
// Created by vadim on 14.05.23.
//
#pragma once

#include <iostream>
#include <fstream>
#include <vector>
#include <cstring>
#include <ctime>
#include <cstdlib>
#include <GL/freeglut.h>
#include "Cube.h"


#ifndef RUBIK_S_CUBE_CALLWINDOW_H
#define RUBIK_S_CUBE_CALLWINDOW_H


class CallWindow {
private:
    int argc;
    char** argv;
    static Cube cube;
public:
    CallWindow(int argc, char** argv,Cube cuber);
    ~CallWindow() = default;
    static void display();
    static void init();
    void startWindow();
    static void specialKeys(int key, int x, int y);

    void createGLUTMenu();

    void processMenu(int value, Cube cube);

    static void Randomise();

    static void processMenu(int value);
};


#endif //RUBIK_S_CUBE_CALLWINDOW_H
