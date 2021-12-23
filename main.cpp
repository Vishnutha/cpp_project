#include <SDL.h>
#include<SDL_image.h>
#include <iostream>
#include"RenderWindow.hpp"
#include"Entity.h"
#include<SDL_mixer.h>
using namespace std;
int main(int argc, char* argv[])
{
    int state = 1;
    if (SDL_Init(SDL_INIT_VIDEO) > 0) {
        cout << "SDL_Init failure ." << SDL_GetError() << endl;
    }
    if (!IMG_Init(IMG_INIT_PNG)) {
        cout << "IMG_Init failure." << SDL_GetError() << endl;
    }
    RenderWindow window("GAME v1.0", 1280, 720);

    SDL_Texture* ballTexture = window.loadTexture("images/ball.png");
    SDL_Texture* holeTexture = window.loadTexture("images/hole.png");
    SDL_Texture* pointTexture = window.loadTexture("images/point.png");
    SDL_Texture* tileDarkTexture32 = window.loadTexture("images/tile32_dark.png");
    SDL_Texture* tileDarkTexture64 = window.loadTexture("images/tile64_dark.png");
    SDL_Texture* tileLightTexture32 = window.loadTexture("images/tile32_light.png");
    SDL_Texture* tileLightTexture64 = window.loadTexture("images/tile64_light.png");
    SDL_Texture* ballShadowTexture = window.loadTexture("images/ball_shadow.png");
    SDL_Texture* bgTexture = window.loadTexture("images/bg.png");
    SDL_Texture* uiBgTexture = window.loadTexture("images/UI_bg.png");
    SDL_Texture* levelTextBgTexture = window.loadTexture("images/levelText_bg.png");
    SDL_Texture* powerMeterTexture_FG = window.loadTexture("images/powermeter_fg.png");
    SDL_Texture* powerMeterTexture_BG = window.loadTexture("images/powermeter_bg.png");
    SDL_Texture* powerMeterTexture_overlay = window.loadTexture("images/powermeter_overlay.png");
    SDL_Texture* logoTexture = window.loadTexture("images/logo.png");
    SDL_Texture* click2start = window.loadTexture("images/click2start.png");
    SDL_Texture* endscreenOverlayTexture = window.loadTexture("images/end.png");
    SDL_Texture* splashBgTexture = window.loadTexture("images/splashbg.png");
    SDL_Texture* menuTexture = window.loadTexture("images/menu.png");
    Entity e(coordinates(100, 400), ballTexture);
    Entity f(coordinates(308, 106), holeTexture);
    Entity intro(coordinates(50, 70), logoTexture);
    bool game = true;
    SDL_Event event;
    Mix_Chunk* Sound_charge = Mix_LoadWAV("sfx/charge.mp3");
    Mix_Chunk* Sound_swing = Mix_LoadWAV("sfx/swing.mp3");
    Mix_Chunk* Sound_hole = Mix_LoadWAV("sfx/hole.mp3");
    SDL_Color White = { 255, 255 ,255 };
    SDL_Color Black = { 0,0,0 };
    


    while (game) {
        while (SDL_PollEvent(&event)) {
            if (event.type == SDL_QUIT)
                game = false;
            if (state == 0) {
                window.clear();
                window.Background(menuTexture);
                //window.render(intro);
            }
            else {
                window.Background(bgTexture);
                window.render(e);
                window.render(f);
            }
            window.display();
        }
    }

        window.cleanUp();
        
        
        //SDL_Quit();
        return 0;
    }
