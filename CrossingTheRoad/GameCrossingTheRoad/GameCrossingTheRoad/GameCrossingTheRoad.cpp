// GameCrossingTheRoad.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Game.h"
#include <iostream>
#include <Windows.h>
#include <thread>
using namespace std;
char Step;
Game g;
void FixConsoleWindow() { 

	HWND consoleWindow = GetConsoleWindow(); 
    LONG style = GetWindowLong(consoleWindow, GWL_STYLE); 
    style = style & ~(WS_MAXIMIZEBOX) & ~(WS_THICKFRAME); 
    SetWindowLong(consoleWindow, GWL_STYLE, style);
}
void subThreadPeople() {
	while (1) {
		if (_kbhit()) {
			Step = _getch();
		}
		g.updatePosPeople(Step);
		Step = ' ';
		g.drawGame();
		Sleep(10);
	}
}
void SubThread() {
	while (1) {
		g.updatePosVehicle();  
		g.updatePosAnimal();
		g.drawGame();
		Sleep(500);
	}
}
int Traffic::tick = 100;
int main()
{
	FixConsoleWindow();
	g = Game(3);
	
  //  thread t1(SubThread);
  //  thread t2(subThreadPeople);
	while (1) {
	/*	if (_kbhit()) {
			Step = _getch();
		}*/
		g.updatePosPeople(Step);
		g.updatePosVehicle();
		g.updatePosAnimal();
		g.drawGame();
		Sleep(500);
	}
//	t1.join();
//	t2.join();
//	system("pause");
    return 0;
}

