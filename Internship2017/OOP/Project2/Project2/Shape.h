#pragma once
class Shape
{
public:
	Shape();
	~Shape();
	virtual int area() = 0;
	virtual void display() = 0;
};

