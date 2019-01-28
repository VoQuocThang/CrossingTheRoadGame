#pragma once
#include "Animal.h"
#include "Vehicle.h"
#include "Point.h"
class People
{
protected:
	Point _p;
	bool _State;
public:
	Point get() const { return _p; }
	void Up(int);
	void Left(int);
	void Right(int);
	void Down(int);
	void Paint() const;
	bool isImpact(const Vehicle * &);
	bool isImpact(const Animal * &);
	bool isFinish();
	bool isDead();
public:
	People();
	People(int, int, bool);
	~People();
};

