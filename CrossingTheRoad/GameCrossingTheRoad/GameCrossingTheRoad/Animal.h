#pragma once
#include "Point.h"
#include "console.h"
#include <iostream>
#include <conio.h>
class Animal
{
protected:
	Point _p;
public:

	Point get() { return _p; }
	void  set(const Point & q) { _p = q; }
    void Move();

public:
	Animal();
	Animal(int, int);
	~Animal();
};

