//
// Created by vadim on 14.05.23.
//

#include "Cube.h"
using std::swap;

void rotate(rgbPairs matrix[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = i; j < 3; j++) {
            rgbPairs tmp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = tmp;
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 1; j++) {
            rgbPairs tmp = matrix[i][j];
            matrix[i][j] = matrix[i][2 - j];
            matrix[i][2 - j] = tmp;
        }
    }
}

void Cube::rotateBF(int j){
    swap(up[0][2 * j],left[0][2 * j]);
    swap(up[1][2 * j],left[1][2 * j]);
    swap(up[2][2 * j],left[2][2 * j]);
    swap(down[0][2 * j],up[0][2 * j]);
    swap(down[1][2 * j],up[1][2 * j]);
    swap(down[2][2 * j], up[2][2 * j]);
    swap(up[0][2 * j],right[0][2 * j]);
    swap(up[1][2 * j],right[1][2 * j]);
    swap(up[2][2 * j],right[2][2 * j]);
}

void Cube::rotateLR(int j) {
    swap(up[2 * j][2],front[0][2 * j]);
    swap(up[2 * j][1],front[1][2 * j]);
    swap(up[2 * j][0], front[2][2 * j]);
    swap(up[2 * j][2], down[2 * j][0]);
    swap(up[2 * j][1],down[2 * j][1]);
    swap(up[2 * j][0],down[2 * j][2]);
    swap(up[2 * j][0],back[0][2 * j]);
    swap(up[2 * j][1], back[1][2 * j]);
    swap(up[2 * j][2], back[2][2 * j]);
}

Cube::Cube() {
    for (int i = 0; i < 3; ++i)
        for (int j = 0; j < 3; ++j) {
            front[i][j] = {1, 1, 1};
            back[i][j] = {1, 1, 0};
            left[i][j] = {0, 0, 1};
            right[i][j] = {0, 1, 0};
            up[i][j] = {1, 0.65, 0};
            down[i][j] = {1, 0, 0};
        }
}

void Cube::U() {
    swap(right[2][0], right[2][2]);
    swap(front[0], right[2]);
    swap(right[2], back[0]);
    swap(back[0], left[2]);
    swap(back[0][0], back[0][2]);

    rotate(up);
}

void Cube::D() {
    swap(right[0][0], right[0][2]);
    swap(front[2], right[0]);
    swap(right[0], back[2]);
    swap(back[2], left[0]);
    swap(back[2][0], back[2][2]);

    rotate(down);
}

void Cube::F() {
    rotate(front);
    rotateBF(0);

}

void Cube::B() {
    rotate(back);
    rotateBF(1);

}

void Cube::R() {
    rotate(right);
    rotateLR(0);
}

void Cube::L() {
    rotate(left);
    rotateLR(1);

}


void Cube::U_() {
    U();
    U();
    U();
}

void Cube::D_() {
    D();
    D();
    D();
}

void Cube::F_() {
    F();
    F();
    F();
}

void Cube::B_() {
    B();
    B();
    B();
}

void Cube::R_() {
    R();
    R();
    R();
}

void Cube::L_() {
    L();
    L();
    L();
}
