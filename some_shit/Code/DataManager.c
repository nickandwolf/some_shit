//
//  DataManager.c
//  some_shit
//
//  Created by Nicholas A Nelson on 1/16/20.
//  Copyright © 2020 Nick & Wolf. All rights reserved.
//

#include "DataManager.h"

Node ObjectList[360];
int counter;
int TILE_SIZE; //MARK: ENGINE SPECIFIC

void DMInit() {
    TILE_SIZE = 48;
    counter = 0;
    DMClearList();
}

void DMDebugList() {
    for (int i = 0; i < counter; i++) {
        printf("Position: %i\n",i);
        printf("Type: %i\n",ObjectList[i].type);
        
        switch (ObjectList[i].type) {
            case 0:
                printf("Name: %s\n",ObjectList[i].object.player.name);
                printf("Pos: %f",ObjectList[i].object.player.position.x);
                printf(", %f\n",ObjectList[i].object.player.position.y);
                break;
                
            case 1:
                printf("Name: %s\n",ObjectList[i].object.item.name);
                printf("Pos: %f",ObjectList[i].object.item.position.x);
                printf(", %f\n",ObjectList[i].object.item.position.y);
                break;
                
            default:
                printf("DEFAULT");
                break;
        }
    }
}

void DMClearList() {
    memset(ObjectList, 0, sizeof(ObjectList));
}

void DMAddList(Object object, int type) {
    ObjectList[counter] = (Node){object, type};
    
    counter++;
}

int DMGetIndexByVector(Vector2 pos) {
    for (int i = 0; i < counter; i++) {
        Vector2 checkPos = {-1,-1};
        switch (ObjectList[i].type) {
            case 0:
                checkPos.x = ObjectList[i].object.player.position.x;
                checkPos.y = ObjectList[i].object.player.position.y;
                break;
            
            case 1:
                checkPos.x = ObjectList[i].object.item.position.x;
                checkPos.y = ObjectList[i].object.item.position.y;
                break;
                
            default://TODO: ADD MORE!
                checkPos.x = ObjectList[i].object.item.position.x;
                checkPos.y = ObjectList[i].object.item.position.y;
        }
        
        if ((checkPos.x == pos.x) && (checkPos.y == pos.y)) {
            return i;
        }
        
    }
    return -1;
}


int DMGetObjectByIndex(int i) {
    
    return -1;
}

int DMGetObjectByPos(Vector2 pos) {
    return -1;
}

void DMUpdateAll() {
    for (int i = 0; i < counter; i++) {
        
    }
}

Vector2 DMGetPosByIndex(int i) {
    Vector2 pos;
    switch (ObjectList[i].type) {
        case 0:
            pos = ObjectList[i].object.player.position;
            break;
        
        case 1:
            pos = ObjectList[i].object.item.position;
            break;
        
        default:
            pos = (Vector2){-1,-1};
        }
    pos.x *= TILE_SIZE;
    pos.y *= TILE_SIZE;
    return pos;
}

//MARK: Render Specific
Texture2D DMGetSpriteByIndex(int i) {
    Texture2D sprite;
    switch (ObjectList[i].type) {
        case 0:
            sprite = ObjectList[i].object.player.sprite;
            break;
        
        case 1:
            sprite = ObjectList[i].object.item.sprite;
            break;
        
        default:
            sprite = (Texture2D){65535,-1,-1,-1,-1};
        }
    return sprite;
}

Rectangle DMGetFrameByIndex(int i) {
    Rectangle frame;
    switch (ObjectList[i].type) {
        case 0:
            frame = ObjectList[i].object.player.frame;
            break;
        
        case 1:
            frame = ObjectList[i].object.item.frame;
            break;
        
        default:
            frame = (Rectangle){-1,-1,-1,-1};
        }
    return frame;
}
