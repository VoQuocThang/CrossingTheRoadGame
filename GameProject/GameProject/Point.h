#pragma once
#include "console.h"
class Point
{
protected:
	int m_x;
	int m_y;
public:
	int X() const;
	int Y() const;
	void setX(int);
	void setY(int);
public:
	Point();
	Point(int, int);
	~Point();
};

