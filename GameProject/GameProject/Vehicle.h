#pragma once
#include "Point.h"
#include "console.h"
#include <conio.h>
#include <vector>
using namespace std;
class Vehicle {
protected:
	char shape[3];
	Point P[3];
public:
	virtual void Move()=0;
    void Paint() const;
	Vehicle();
	virtual ~ Vehicle(){}
};