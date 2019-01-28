#pragma once
#include "Point.h"
#include <iostream>
#include <vector>
#include "console.h"
#include "Car.h"
#include "Truck.h"
#include <conio.h>
using namespace std;
class People {
private:
	Point P[2];
	bool m_State;
public:
	People();
	People(int, int);
	void Paint();
	void Up();
	void Control();
	void Left();
	void Right();
	void Down();
	bool isImpact(const Vehicle * &);
//	bool isImpact(const Vehicle * &);
	bool isFinish();
	bool isDead();
	virtual ~People() {};
};