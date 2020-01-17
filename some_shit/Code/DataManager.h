//
//  DataManager.h
//  some_shit
//
//  Created by Nicholas A Nelson on 1/16/20.
//  Copyright © 2020 Nick & Wolf. All rights reserved.
//

#pragma once
#include <stdio.h>
#include <string.h>
#include "Player.h"
#include "Items.h"

/*
0 = player
1 = item //So if Type > 1 = has attributes?
2 = door
3 = key
*/

typedef union {
    struct Player player;
    struct Item item;
    struct Door door;
    struct Key key;
} Object;

typedef struct Node {
    Object object;
    int type;
} Node;

void DMDebugList(void);

void DMInit(void);
int DMGetIndexByVector(Vector2 pos);
void DMClearList(void);
void DMAddList(Object object, int type);

int DMGetObjectByIndex(int i);
int DMGetObjectByPos(Vector2 pos);

int DMGetTypeByIndex(int i);
int DMGetTypeByPos(Vector2 pos);

Vector2 DMGetPosByIndex(int i);

void DMUpdateAll(void);
void DMReturnSprites(void);

//MARK: Engine Specific
Texture2D DMGetSpriteByIndex(int i);
Rectangle DMGetFrameByIndex(int i);
