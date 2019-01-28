#pragma once
#include "Animal.h"
class Dinausor : public Animal
{
public:
	void Move();
	void Paint( ) const;
public:
	Dinausor();
	Dinausor(int, int);
	~Dinausor();
};

