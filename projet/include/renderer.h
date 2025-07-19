#ifndef RENDERER_H
#define RENDERER_H

#include "raylib.h"
#include <math.h>

// Screen dimensions
const int screenWidth = 1920;
const int screenHeight = 1080;


void initScene(void);
void updateScene(void);
void drawScene(void);
void cleanupScene(void);

#endif // RENDERER_H