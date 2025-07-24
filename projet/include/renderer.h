#ifndef RENDERER_H
#define RENDERER_H

#include "raylib.h"
#include <math.h>

// Screen dimensions
const int screenWidth = 1920;
const int screenHeight = 1080;


#define GRID_SIZE 30
#define SHADOWMAP_RESOLUTION 2048

// Simuation
float simulationSpeed = 1.0f;


//eau
#define GOUTE_PLUIE 1000 
bool pleut = false;
float frequence_pluie = 0.0f;
float random_pluie = 1.0f;
Music musique_pluie;
bool musique_pluie_on = false;


void initScene(void);
void updateScene(void);
void drawScene(void);
void cleanupScene(void);

// Model loading and unloading functions
void loadModels(void);
void unloadModels(void);




#endif // RENDERER_H