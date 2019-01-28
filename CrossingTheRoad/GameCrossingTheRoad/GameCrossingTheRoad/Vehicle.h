#pragma once
#include "Point.h"
#include "console.h"
#include <iostream>
#include <conio.h>
using namespace std;
class Vehicle
{
protected:
	Point _p;
	bool  light;

public :
	Point get() const { return _p; }
	Point set(const Point & q) { _p = q;}
	void setLight(int x) { light = x; }
	void Move();
public:
	Vehicle();
	Vehicle(int, int);
	~Vehicle();
};

