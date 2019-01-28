#include <Mmsystem.h>
#include <Windows.h>
#include <iostream>
#pragma comment(lib, "Winmm.lib")
using namespace std;
int main(){
/*	mciSendString("open \"*.mp3\" type mpegvideo alias mp3", NULL, 0, NULL);
    mciSendString("play mp3", NULL, 0, NULL);*/
    PlaySound("D:\test.wav", GetModuleHandle(NULL), SND_FILENAME);
    return 0;
}
