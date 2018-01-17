#include "Rectangle.h"


Rectangle::Rectangle()
{
}

Rectangle::Rectangle(float mWidth, float mHeight)
{
	this->mWidth = mWidth;
	this->mHeight = mHeight;
}
void Rectangle::setWidth(int width)
{
	this->mWidth = width;
}
int Rectangle::getWidth()
{
	 return this->mWidth; 
}
void Rectangle::setHeight(int height)
{
	this->mWidth = height;
}
int Rectangle::getHeight()
{
	return this->mHeight;
}
Rectangle::~Rectangle()
{
}
int Rectangle::area()
{
	return float(this->mHeight * this->mWidth);
}

void Rectangle::display()
{
	cout << "This shape is a Rectangle." << endl;
	cout << "Width	: " << this->mWidth << endl;
	cout << "Height	: " << this->mHeight << endl;
	cout << "Area	: " << this->area() << endl;
}
