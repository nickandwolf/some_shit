//
//  Renderer.h
//  some_shit
//
//  Created by Nicholas A Nelson on 1/17/20.
//  Copyright © 2020 Nick & Wolf. All rights reserved.
//

#pragma once
#include "raylib.h"
#include "DataManager.h"

typedef struct RenderData {
    Texture2D sprite;
    Rectangle frame;
    Vector2 pos;
} RenderData;

void RInit(void);
void RDraw(int count);
