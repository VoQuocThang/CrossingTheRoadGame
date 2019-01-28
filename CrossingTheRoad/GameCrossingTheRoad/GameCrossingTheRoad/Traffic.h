#pragma once
#include "console.h"
#include <conio.h>
#include <iostream>
using namespace std;
class Traffic
{
private:
	int Time;
	int _x, _y;
public:
	static int tick;
public:
	bool isRed() { return Time <= 0; }
	void reset() { Time = tick; }
	void pass()  { Time--; }
	void paint();
public:
	Traffic();
	Traffic(int x, int y);
	~Traffic();
};

