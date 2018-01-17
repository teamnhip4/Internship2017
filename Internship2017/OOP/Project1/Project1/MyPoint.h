#ifndef _MY_POINT_
#define _MY_POINT_
class MyPoint
{
private:
	int mPosX;
	int mPosY;
public:
	MyPoint();
	MyPoint(int x, int y);
	void display();
	void setX(int x);
	int getX();
	void setY(int y);
	int getY();
	int distance(MyPoint p);
	int distance(MyPoint p1, MyPoint p2);
	//~MyPoint();
};
#endif