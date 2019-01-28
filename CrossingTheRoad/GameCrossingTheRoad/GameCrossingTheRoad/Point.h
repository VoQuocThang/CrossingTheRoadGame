#pragma once
class Point
{
private:
	int _x, _y;
public:
	int X() const{ return _x; }
	int Y()  const { return _y; }
	void setX(int x) { _x = x; }
	void setY(int y) { _y = y; }
public:
	Point();
	Point(int, int);
	~Point();
};

