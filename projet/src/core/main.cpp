#include "renderer.h"



int main(void) {


    initScene();

    while (!WindowShouldClose()) {
        updateScene();
        drawScene();
    }
    cleanupScene();
    CloseWindow();
 
    return 0;
}