#include "renderer.h"
#include <raylib.h>



void loadModels(void) {
     //forets temperee
    //0 bouleau bouleau_feuilles1
    Model model_bouleau1 = LoadModel("models/foret_tempere/arb_bouleau/bouleau_feuilles1.glb");
    Model model_mort_bouleau1 = LoadModel("models/foret_tempere/arb_bouleau/bouleau_mort1.glb");
    //1 bouleau bouleau_feuilles2
    Model model_bouleau2 = LoadModel("models/foret_tempere/arb_bouleau/bouleau_feuilles2.glb");
    Model model_mort_bouleau2 = LoadModel("models/foret_tempere/arb_bouleau/bouleau_mort2.glb");
    //2 erable erable_feuilles
    Model model_erable = LoadModel("models/foret_tempere/arb_erable/erable_feuilles.glb");
    Model model_mort_erable = LoadModel("models/foret_tempere/arb_erable/erable_mort.glb");
    //3 hetre hetre_feuilles
    Model model_hetre = LoadModel("models/foret_tempere/arb_hetre/hetre_feuilles.glb");
    Model model_mort_hetre = LoadModel("models/foret_tempere/arb_hetre/hetre_mort.glb");
    //4 chene oaks_feuilles
    Model model_chene = LoadModel("models/foret_tempere/arb_oak/oaks_feuilles.glb");
    Model model_mort_chene = LoadModel("models/foret_tempere/arb_oak/oaks_mort.glb");

    // Forêt tropicale humide
    Model model_jungle1 = LoadModel("models/foret_tropicale_hum/arb_jungle1/jungle_feuillage.glb");
    Model model_jungle2 = LoadModel("models/foret_tropicale_hum/arb_jungle2/jungle_feuillage2.glb");
    Model model_jungle3 = LoadModel("models/foret_tropicale_hum/arb_jungle3/jungle_feuillage3.glb");
    Model model_mort_jungle1 = LoadModel("models/foret_tropicale_hum/arb_jungle1/jungle_mort1.glb");
    Model model_mort_jungle2 = LoadModel("models/foret_tropicale_hum/arb_jungle2/jungle_mort2.glb");
    Model model_mort_jungle3 = LoadModel("models/foret_tropicale_hum/arb_jungle3/jungle_mort3.glb");

    // Forêt tropicale sèche
    Model model_acacia = LoadModel("models/foret_tropicale_seche/arb_accacia/accacia_feuillage1.glb");
    Model model_mort_acacia = LoadModel("models/foret_tropicale_seche/arb_accacia/accacia_mort1.glb");
    Model model_accacia2 = LoadModel("models/foret_tropicale_seche/arb_accacia2/accacia_feuillage2.glb");
    Model model_mort_accacia2 = LoadModel("models/foret_tropicale_seche/arb_accacia2/accacia_mort2.glb");

    // FORET MEDITERANEENNE
    Model model_cypr = LoadModel("models/foret_mediteranee/arb_cypr/cypr_feuillage.glb");    
    Model model_mort_cypr = LoadModel("models/foret_mediteranee/arb_cypr/cypr_mort.glb");
    Model model_pin = LoadModel("models/foret_mediteranee/arb_pin/pin_feuillage.glb");
    Model model_mort_pin = LoadModel("models/foret_mediteranee/arb_pin/pin_mort.glb");

    // FORET BOREAL
    Model model_sapin_boreal = LoadModel("models/foret_boreal/arb_sapin/sapin_feuilles.glb");
    Model model_mort_sapin_boreal = LoadModel("models/foret_boreal/arb_sapin/sapin_mort.glb");
    Model model_sapin1_boreal = LoadModel("models/foret_boreal/arb_sapin1/sapin_fir_feuilles.glb");
    Model model_mort_sapin1_boreal = LoadModel("models/foret_boreal/arb_sapin1/sapin_fir_mort.glb");
    
}


void unloadModels(void) {
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