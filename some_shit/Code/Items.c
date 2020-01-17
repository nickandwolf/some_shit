//
//  Items.c
//  some_shit
//
//  Created by Nicholas A Nelson on 1/16/20.
//  Copyright © 2020 Nick & Wolf. All rights reserved.
//

#include "Items.h"

void ItemAttack(Item* item, int damage) {
    damage -= item->durability;
    if (damage > 0) {
        item->structure -= damage;
    }
}

Item ItemBrickWall(Vector2 pos) {
    Item brickWall;
    strcpy(brickWall.name, "Brick Wall");
    brickWall.sprite = LoadTexture("Assets/terrain.png");
    brickWall.frame = (Rectangle){48,48,48,48};
    brickWall.position.x = pos.x;
    brickWall.position.y = pos.y;
    brickWall.durability = 5;
    brickWall.size = 5;
    brickWall.structure = 10;//size+dur
    brickWall.blocking = true;
    
    return brickWall;
}

Door DoorCreate(Vector2 pos) {
    Door door;
    strcpy(door.attributes.name, "Brick Wall");
    door.attributes.position.x = pos.x;
    door.attributes.position.y = pos.y;
    door.attributes.durability = 2;
    door.attributes.size = 5;
    door.attributes.structure = 7;//size+dur
    door.attributes.blocking = true;
    
    door.closed = false;//TODO: Expand on this!
    door.jammed = false;
    door.locked = false;
    door.key = 0;
    
    return door;
}

void DoorOpen(Door* door);
void DoorToggleLock(Key* key);
void DoorUpdate(Door* door);
