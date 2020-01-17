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

//360 max objects
int main(int argc, const char * argv[]) {
    DMInit();
    DMAddList((Object)ItemBrickWall((Vector2){0,0}),1);
    DMAddList((Object)ItemBrickWall((Vector2){1,0}),1);
    DMAddList((Object)ItemBrickWall((Vector2){2,0}),1);
    DMAddList((Object)ItemBrickWall((Vector2){3,0}),1);
    
    int test = DMGetObjectVector((Vector2){2,0});
    
    printf("%i\n", test);
    
    
    return 0;
}

