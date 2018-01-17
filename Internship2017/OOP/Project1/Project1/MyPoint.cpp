#include "MyPoint.h"
#include "iostream"
#include "math.h"
using namespace std;


MyPoint::MyPoint()
{
	mPosX = 0;
	mPosY = 0;
}
MyPoint::MyPoint(int x, int y)
{
	this->mPosX = x;
	this->mPosY = y;
}
void MyPoint::display()
{
	cout << "x = " << mPosX << endl;
	cout << "y = " << mPosY << endl;
}
void MyPoint::setX(int x)
{
	mPosX = x;
}
int MyPoint::getX()
{
	return mPosX;
}
void MyPoint::setY(int y)
{
	mPosY = y;
}
int MyPoint::getY()
{
	return mPosY;
}
int MyPoint::distance(MyPoint p)
{
	int kq = sqrt(((this->mPosX - p.mPosX)*(this->mPosX - p.mPosX)) + ((this->mPosY - p.mPosY)*(this->mPosY - p.mPosY)));
	cout << kq << " cm" << endl;
	return kq;
}
int MyPoint::distance(MyPoint p1, MyPoint p2)
{
	int kq = sqrt(((p1.mPosX - p2.mPosX)*(p1.mPosX - p2.mPosX)) + ((p1.mPosY - p2.mPosY)*(p1.mPosY - p2.mPosY)));
	cout << kq << " cm" << endl;
	return kq;
}
