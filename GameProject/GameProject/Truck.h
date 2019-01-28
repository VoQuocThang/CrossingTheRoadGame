#pragma once
#include "Vehicle.h"
class Truck : public Vehicle {
public :
void Move();
void Paint() const;
public:
	Truck();
	Truck(int, int);
	~Truck() {};
};