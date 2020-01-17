//
//  Player.h
//  some_shit
//
//  Created by Nicholas A Nelson on 1/16/20.
//  Copyright © 2020 Nick & Wolf. All rights reserved.
//

#pragma once
#include "raylib.h"

typedef struct Player{ //TODO: optimize
    char name[12];
    Texture2D sprite;
    int facing;
    Vector2 position;
    int attributeMax;
    
    int str;
    int dex;
    int sta;
} Player;

//make player generation

void PlayerMove(Player* p1, Vector2 prop);
