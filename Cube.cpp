//
// Created by vadim on 14.05.23.
//

#include "Cube.h"


Cube::Cube(){
    for (int i = 0; i < 3; ++i)
        for (int j = 0; j < 3; ++j){
            front[i][j] = {1,1,1};
            back[i][j] = {1,1,0};
            left[i][j] = {0,0,1};
            right[i][j] = {0,1,0};
            up[i][j] = {1, 0.65, 0};
            down[i][j] = {1,0,0};
        }
}

