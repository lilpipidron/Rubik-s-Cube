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
    swap(front[0], right[2]);
    swap(front[0], back[0]);
    swap(front[0], left[2]);
    swap(left[2][0], left[2][2]);
    swap(right[2][0],right[2][2]);
    rotate(up);
}

void Cube::D() {
    swap(front[2][0], right[0][2]);
    swap(front[2][1],right[0][1]);
    swap(front[2][2],right[0][0]);
    swap(front[2][0],back[2][2]);
    swap(front[2][1],back[2][1]);
    swap(front[2][2],back[2][0]);
    swap(front[2][0],left[0][0]);
    swap(front[2][1],left[0][1]);
    swap(front[2][2],left[0][2]);
    rotate(down);
}

void Cube::F() {
    swap(up[0][0], left[2][0]);
    swap(up[1][0],left[1][0]);
    swap(up[2][0], left[0][0]);
    swap(up[0][0], down[2][0]);
    swap(up[1][0], down[1][0]);
    swap(up[2][0], down[0][0]);
    swap(up[0][0], right[0][0]);
    swap(up[1][0], right[1][0]);
    swap(up[2][0],right[2][0]);
    rotate(front);

}

void Cube::B() {
    swap(left[2][2],down[2][2]);
    swap(left[1][2],down[1][2]);
    swap(left[0][2],down[0][2]);
    swap(left[2][2],right[0][2]);
    swap(left[1][2],right[1][2]);
    swap(left[0][2],right[2][2]);
    swap(left[2][2],up[0][2]);
    swap(left[1][2],up[1][2]);
    swap(left[0][2],up[2][2]);
    rotate(back);


}

void Cube::L() {
    swap(front[2][2],down[2][2]);
    swap(front[1][2],down[2][1]);
    swap(front[0][2],down[2][0]);
    swap(front[2][2],back[0][2]);
    swap(front[1][2],back[1][2]);
    swap(front[0][2],back[2][2]);
    swap(front[2][2],up[2][0]);
    swap(front[1][2],up[2][1]);
    swap(front[0][2],up[2][2]);
    rotate(left);
}

void Cube::R() {
    swap(front[0][0],up[0][2]);
    swap(front[1][0],up[0][1]);
    swap(front[2][0],up[0][0]);
    swap(up[0][2],down[0][0]);
    swap(up[0][1], down[0][1]);
    swap(up[0][0],down[0][2]);
    swap(up[0][0], back[0][0]);
    swap(up[0][1],back[1][0]);
    swap(up[0][2],back[2][0]);
    rotate(right);
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
