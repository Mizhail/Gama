#pragma once
#include"../graphics/graphics.h"

class Ameba{
    public:
        void Draw(){
            render::DrawImage("v.jpg", 0, 0);
        }
        void Update(){
            x += 0.1;
        }
    private:
        float x = 0;
};