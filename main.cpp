#include "CallWindow.h"
#include "Cube.h"
int main(int argc, char** argv) {
    Cube cube;
    CallWindow window(argc,argv, cube);
    window.startWindow();
    return 0;
}