#include "stdafx.h"
#include "Animal.h"


Animal::Animal(){
	_p = Point(0, 0);
}

Animal::Animal(int x, int y) {
	_p = Point(x, y);
}

void Animal::Move() {
	_p.setX(_p.X()+10);
}
Animal::~Animal()
{
}
