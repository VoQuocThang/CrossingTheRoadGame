#pragma once
#include "Animal.h"
#include <conio.h>
class Bird : public Animal 
{
public:
	void Move();
	void Paint() const;
public:
	Bird();
	Bird(int, int);
	~Bird();
};

