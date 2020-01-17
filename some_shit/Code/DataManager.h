//
//  DataManager.h
//  some_shit
//
//  Created by Nicholas A Nelson on 1/16/20.
//  Copyright © 2020 Nick & Wolf. All rights reserved.
//

#pragma once
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
} Object;

typedef struct Node {
    Object object;
    int type;
} Node;

void DMInit(void);
int DMGetObjectVector(Vector2 pos);
void DMClearList(void);
void DMAddList(Object object, int type);

int DMGetObjectArr(int i);
int DMGetObjectPos(Vector2 pos);
int DMGetTypeArr(int i);
int DMGetTypePos(Vector2 pos);
