//
//  main.c
//  some_shit
//
//  Created by Nicholas A Nelson on 4/7/19.
//  Copyright © 2019 Nick & Wolf. All rights reserved.
//
//TODO: Make everything independant from Raylib

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "raylib.h"
#include "Player.h"
#include "Items.h"
#include "DataManager.h"
#include "Renderer.h"

//360 max objects

                  // Set our game to run at 60 frames-per-second
int main(int argc, const char * argv[]) {
    
    RInit();
    
    DMInit();
    DMAddList((Object)ItemBrickWall((Vector2){0,0}),1);
    DMAddList((Object)ItemBrickWall((Vector2){1,0}),1);
    DMAddList((Object)ItemBrickWall((Vector2){2,0}),1);
    DMAddList((Object)ItemBrickWall((Vector2){3,0}),1);
    
    while (!WindowShouldClose()) {
        RDraw(4);
    }
    
    return 0;
}
