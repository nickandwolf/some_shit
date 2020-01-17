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

void DMInit() {
    counter = 0;
    DMClearList();
}

int DMGetObjectVector(Vector2 pos) {
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
                
            default:
                checkPos.x = ObjectList[i].object.item.position.x;
                checkPos.y = ObjectList[i].object.item.position.y;
        }
        
        if ((checkPos.x == pos.x) && (checkPos.y == pos.y)) {
            return i;
        }
        
    }
    return -1;
}

void DMClearList() {
    memset(ObjectList, 0, sizeof(ObjectList));
}

void DMAddList(Object object, int type) {
    ObjectList[counter] = (Node){object, type};
    counter++;
}

int DMGetObjectArr(int i) {
    
    return -1;
}

int DMGetObjectPos(Vector2 pos) {
    return -1;
}
