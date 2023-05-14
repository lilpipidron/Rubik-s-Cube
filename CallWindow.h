//
// Created by vadim on 14.05.23.
//
#include <iostream>
#include <fstream>
#include <vector>
#include <cstring>
#include <ctime>
#include <cstdlib>
#include <GL/freeglut.h>
#ifndef CUBE_CALLWINDOW_H
#define CUBE_CALLWINDOW_H


class CallWindow {
private:
    int argc;
    char** argv;
public:
    CallWindow(int argc, char** argv);
    static void display();
    static void init();
    void startWindow();
    static void specialKeys(int key, int x, int y);
};


#endif //CUBE_CALLWINDOW_H
