#include "renderer.h"



void initScene(void){

}


void updateScene(void){
    // Update code goes here
}

void drawScene(void){
    // Drawing code goes here
    BeginDrawing();
}

void cleanupScene(void){
    // Cleanup code goes here
       UnloadShader(shader);
    UnloadShader(shadowShader);
    UnloadShader(shader_taille);
    UnloadShader(herbe_shader);
    // Désallocation des ressources
    UnloadModel(model_bouleau1);
    UnloadModel(model_bouleau2);
    UnloadModel(model_mort_bouleau1);
    UnloadModel(model_mort_bouleau2);
    UnloadModel(model_hetre);
    UnloadModel(model_mort_hetre);
    UnloadModel(model_chene);
    UnloadModel(model_mort_chene);
    UnloadModel(model_acacia);
    UnloadModel(model_mort_acacia);
    UnloadModel(model_accacia2);
    UnloadModel(model_mort_accacia2);
    UnloadModel(model_erable);
    UnloadModel(model_mort_erable);
    UnloadModel(model_jungle1);
    UnloadModel(model_mort_jungle1);
    UnloadModel(model_jungle2);
    UnloadModel(model_mort_jungle2);
    UnloadModel(model_jungle3);
    UnloadModel(model_mort_jungle3);
    UnloadModel(model_cypr);
    UnloadModel(model_mort_cypr);
    UnloadModel(model_pin);
    UnloadModel(model_mort_pin);
    UnloadModel(model_sol);
    UnloadTexture(texture_sol);
    UnloadTexture(temperatureTexture);
    UnloadShadowmapRenderTexture(shadowMap);
    // Dans la section de nettoyage (juste avant CloseWindow())
    //UnloadShader(postProcessShader);
    //UnloadRenderTexture(target);

    // Clear the memory of other resources
    printf("model herbe unload\n");
    UnloadImage(image_sol);
    printf("image sol unload\n");
    UnloadImage(image_texture_sol);
    printf("image texture sol unload\n");
    UnloadMusicStream(musique_pluie);
    CloseAudioDevice();
    printf("musique pluie unload\n");
}
