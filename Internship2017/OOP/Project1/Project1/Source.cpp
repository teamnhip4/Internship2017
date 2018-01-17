#include "MyPoint.h"
#include "iostream"
using namespace std;
int main()
{
	int m, n;
	MyPoint *p = new MyPoint;
	MyPoint p1,p2;
	cout << "\nham dung mac dinh :";
	cout << endl;
	p1.display();
	cout << "x = "; cin >> m;
	cout << "y = "; cin >> n;
	p1.setX(m);
	p1.setY(n);
	p1.getX();
	p1.getY();
	cout << "\nham dung co tham so x & y :" << endl;
	p1.display();
	cout << "\nkhoang cach voi toa do p = ";
	p->distance(p1);
	int i, j;
	cout << "\nnhap toa do p2 : " << endl;
	cout << "x' = "; cin >> i;
	cout << "y' = "; cin >> j;
	p2.setX(i);
	p2.setY(j);
	p2.getX();
	p2.getY();
	cout << "\nkhoang cach giua 2 toa do p1 & p2 : ";
	p1.distance(p1, p2);
	cout << endl;
	system("pause");
	return 0;
}