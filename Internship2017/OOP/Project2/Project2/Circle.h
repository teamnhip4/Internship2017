#pragma once
#include "Shape.h"
class Circle : public Shape
{
private:
	float mRadius;
public:
	Circle();
	Circle(int mRadius);
	~Circle();
	int area();
	void display();
	int getRadius(); 
	void setRadius(int radius);
};

