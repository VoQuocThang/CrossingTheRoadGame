// Testing.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "console.h"
#include <Windows.h>
#include <iostream>
using namespace std;
void FixConsoleWindow()
{ 
	HWND consoleWindow = GetConsoleWindow();   
		LONG style = GetWindowLong(consoleWindow, GWL_STYLE);   
		style = style & ~(WS_MAXIMIZEBOX) & ~(WS_THICKFRAME); 
		SetWindowLong(consoleWindow, GWL_STYLE, style); 
}
int main()
{
	FixConsoleWindow();
    return 0;
}

