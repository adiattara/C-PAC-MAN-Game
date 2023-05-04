//
// Created by amadou on 24/02/23.
//

#ifndef PACMAN_MAP_H
#define PACMAN_MAP_H
#include <SDL.h>

#include <iostream>
#include <vector>

class Map {

private:
    friend class Person;

public:
    SDL_Window* pWindow = nullptr;
    SDL_Surface* win_surf = nullptr;
    SDL_Surface* plancheSprites = nullptr;
    SDL_Rect src_bg = { 200,3, 168,216 }; // x,y, w,h (0,0) en haut a gauche
    SDL_Rect bg = { 4,4, 672,864 }; // ici scale x4

    //std::vector <std::vector <int>> tab = {}; //21*27
    //utiliser std::vector pour le tableau
    std::vector<std::vector<int>> tab
    {
        {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},
        {-1,1,1,1,1,1,1,1,1,1,-1,1,1,1,1,1,1,1,1,1,-1},
        {-1,1,-1,-1,-1,1,-1,-1,-1,1,-1,1,-1,-1,-1,1,-1,-1,-1,1,-1},
        {-1,2,-1,-1,-1,1,-1,-1,-1,1,-1,1,-1,-1,-1,1,-1,-1,-1,2,-1},
        {-1,1,-1,-1,-1,1,-1,-1,-1,1,-1,1,-1,-1,-1,1,-1,-1,-1,1,-1},
        {-1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,-1},
        {-1,1,-1,-1,-1,1,-1,1,-1,-1,-1,-1,-1,1,-1,1,-1,-1,-1,1,-1},
        {-1,1,-1,-1,-1,1,-1,1,-1,-1,-1,-1,-1,1,-1,1,-1,-1,-1,1,-1},
        {-1,1,1,1,1,1,-1,1,1,1,-1,1,1,1,-1,1,1,1,1,1,-1},
        {-1,-1,-1,-1,-1,1,-1,-1,-1,0,-1,0,-1,-1,-1,1,-1,-1,-1,-1,-1},
        {-1,-1,-1,-1,-1,1,-1,0,0,0,0,0,0,0,-1,1,-1,-1,-1,-1,-1},
        {-1,-1,-1,-1,-1,1,-1,0,-1,-1,-1,-1,-1,0,-1,1,-1,-1,-1,-1,-1},
        {-1,-1,-1,-1,-1,1,-1,0,-1,-1,-1,-1,-1,0,-1,1,-1,-1,-1,-1,-1},
        {-1,0,0,0,0,1,0,0,-1,-1,-1,-1,-1,0,0,1,0,0,0,0,-1},
        {-1,-1,-1,-1,-1,1,-1,0,-1,-1,-1,-1,-1,0,-1,1,-1,-1,-1,-1,-1},
        {-1,-1,-1,-1,-1,1,-1,0,0,0,0,0,0,0,-1,1,-1,-1,-1,-1,-1},
        {-1,-1,-1,-1,-1,1,-1,0,-1,-1,-1,-1,-1,0,-1,1,-1,-1,-1,-1,-1},
        {-1,-1,-1,-1,-1,1,-1,0,-1,-1,-1,-1,-1,0,-1,1,-1,-1,-1,-1,-1},
        {-1,1,1,1,1,1,1,1,1,1,-1,1,1,1,1,1,1,1,1,1,-1},
        {-1,1,-1,-1,-1,1,-1,-1,-1,1,-1,1,-1,-1,-1,1,-1,-1,-1,1,-1},
        {-1,2,1,1,-1,1,1,1,1,1,3,1,1,1,1,1,-1,1,1,2,-1},
        {-1,-1,-1,1,-1,1,-1,1,-1,-1,-1,-1,-1,1,-1,1,-1,1,-1,-1,-1},
        {-1,-1,-1,1,-1,1,-1,1,-1,-1,-1,-1,-1,1,-1,1,-1,1,-1,-1,-1},
        {-1,1,1,1,1,1,-1,1,1,1,-1,1,1,1,-1,1,1,1,1,1,-1},
        {-1,1,-1,-1,-1,-1,-1,-1,-1,1,-1,1,-1,-1,-1,-1,-1,-1,-1,1,-1},
        {-1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,-1},
        {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1}
    };

    Map()
    {
        pWindow = SDL_CreateWindow("PacMan", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 700, 900, SDL_WINDOW_SHOWN);
        win_surf = SDL_GetWindowSurface(pWindow);

        plancheSprites = SDL_LoadBMP("./pacman_sprites.bmp");
    }

    int test_fin();
    void passage(int x, int y);

};


#endif //PACMAN_MAP_H
