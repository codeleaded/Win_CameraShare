#include "/home/codeleaded/System/Static/Library/WindowEngine1.0.h"
#include "/home/codeleaded/System/Static/Library/RLCamera.h"
#include "/home/codeleaded/System/Static/Library/ImageFilter.h"


ORLCamera orlc;

void Setup(AlxWindow* w){
    orlc = ORLCamera_New("/dev/video10",GetWidth(),GetHeight());

    Clear(BLACK);
}

void Update(AlxWindow* w){
    //Clear(BLACK);

    Draw(GetMouse().x,GetMouse().y,WHITE);

    ORLCamera_Set(&orlc,window.Buffer,window.Width,window.Height);
}

void Delete(AlxWindow* w){
    ORLCamera_Free(&orlc);
}

int main(){
    if(Create("Camera Test",800,600,1,1,Setup,Update,Delete))
        Start();
    return 0;
}