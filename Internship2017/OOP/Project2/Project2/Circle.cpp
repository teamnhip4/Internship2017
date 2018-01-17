#include "Circle.h"
#include "iostream"
using namespace std;

Circle::Circle()
{
}


Circle::~Circle()
{
}

Circle::Circle(int mRadius)
{
	this->mRadius = mRadius;
}
void Circle::setRadius(int mRadius)
{
	this->mRadius = mRadius;
}
int Circle::getRadius()
{
	 return this->mRadius; 
}
int Circle::area()
{
	return float(3.14 * this->getRadius() * this->getRadius());
}

void Circle::display()
{
	cout << "This shape is a Circle." << endl;
	cout << "Radius	: " << this->getRadius() << endl;
	cout << "Area	: " << this->area() << endl;
}