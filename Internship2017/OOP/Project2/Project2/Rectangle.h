#pragma once
#include "Shape.h"
#include "iostream"
using namespace std;
class Rectangle : public Shape
{
private:
	float mWidth;
	float mHeight;
public:
	Rectangle();
	Rectangle(float mWidth, float mHeight);
	~Rectangle();
	int area();
	void display();
	int getWidth(); 
	void setWidth(int width);
	int getHeight();
	void setHeight(int height); 
};

