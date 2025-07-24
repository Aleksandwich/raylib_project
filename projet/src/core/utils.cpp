




// Génère un float aléatoire entre 0.0 et 1.0
float frand() {
    return (float)GetRandomValue(0, 10000) / 10000.0f;
}

float random_flottant(float min, float max) {
    return min + (rand() / (float)RAND_MAX) * (max - min);
}

//terrain avec hauteur
float GetHeightFromTerrain(Vector3 position, Image heightmap, Vector3 terrainSize) {
    int mapX = (int)((position.x + terrainSize.x / 2.0f) * heightmap.width / terrainSize.x);
    int mapZ = (int)((position.z + terrainSize.z / 2.0f) * heightmap.height / terrainSize.z);

    mapX = Clamp(mapX, 0, heightmap.width - 1);
    mapZ = Clamp(mapZ, 0, heightmap.height - 1);

    Color pixel = GetImageColor(heightmap, mapX, mapZ);
    return (pixel.r / 255.0f) * terrainSize.y;
}


bool is_time_expired(double time_limit, double start_time) {
    double current_time = GetTime();
    double elapsed = current_time - start_time;
    double adjusted_time_limit = time_limit / simulationSpeed;
    
    if (elapsed >= adjusted_time_limit) {
        //faut le stoper le chrono ici
        chrono_lance = false;
        return true;
    }else{
        return false;
    }
}