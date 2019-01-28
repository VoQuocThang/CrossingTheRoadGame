#include "stdafx.h"
#include "Car.h"

Car::Car() : Vehicle::Vehicle(){
}

Car::Car(int x,int y) : Vehicle::Vehicle(x,y) {}

void Car::Paint() const {
	
	gotoXY(_p.X(), _p.Y());
	TextColor(ColorCode_Yellow);
	putchar('Car');
	
}

void Car::Move() {
	Vehicle::Move();
}

Car::~Car()
{
}
