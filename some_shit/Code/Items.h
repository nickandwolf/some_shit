//
//  Items.h
//  some_shit
//
//  Created by Nicholas A Nelson on 1/16/20.
//  Copyright © 2020 Nick & Wolf. All rights reserved.
//

#pragma once
#include "raylib.h"
#include <stdbool.h>
#include <string.h>

typedef struct Item{ //TODO: optimize
    char name[12];
    Texture2D sprite;
    Rectangle frame;
    Vector2 position;
    int durability;
    int size;
    int structure;
    bool blocking;
} Item;

void ItemAttack(Item* item, int damage);
void ItemUpdate(Item* item);//TODO: Needed?

Item ItemBrickWall(Vector2 pos);

typedef struct Key{
    Item attributes;
    int code;
} Key;

typedef struct Door{
    Item attributes;
    bool closed;
    bool locked;
    bool jammed;//NOTHING YET!
    
    int key;
} Door;

Door DoorCreate(Vector2 pos);
void DoorOpen(Door* door);
void DoorToggleLock(Key* key);
void DoorUpdate(Door* door);
