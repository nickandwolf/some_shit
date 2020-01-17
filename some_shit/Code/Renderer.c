//
//  Renderer.c
//  some_shit
//
//  Created by Nicholas A Nelson on 1/17/20.
//  Copyright © 2020 Nick & Wolf. All rights reserved.
//

#include "Renderer.h"

void RInit() {
    InitWindow(960, 864, "Some_Shit");
    SetTargetFPS(60);
}
void RDraw(int counter) {
    BeginDrawing();
    ClearBackground(RAYWHITE);
    
    for (int i = 0; i < counter; i++) {
        DrawTextureRec(DMGetSpriteByIndex(i), DMGetFrameByIndex(i), DMGetPosByIndex(i), WHITE);
    }
    
    EndDrawing();
}
