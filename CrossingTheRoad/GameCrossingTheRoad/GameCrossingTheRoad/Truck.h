#pragma once
#include "Vehicle.h"
class Truck : public Vehicle
{
public:
	void Move();
public:
	void Paint() const;
public:
	Truck();
	Truck(int, int);
	~Truck();
};

