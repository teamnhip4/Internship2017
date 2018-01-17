#include "stdio.h"
#include "iostream"
using namespace std;
int a, b, c;
bool exam(int a, int b, int c)
{
	if ((a + b>c) && (a + c>b) && (b + c>a) && (a>0) && (b>0) && (c>0)) //kiem tra tam giac hop le
		return true;
	return false;
}
bool equilateraltriangle(int a, int b, int c)
{
	if ((a == b) && (b == c))
		return true;
	return false;
}
bool isoscelestriangle(int a, int b, int c)
{
	if ((a == b) || (b == c) || (a == c))
		return true;
	return false;
}
bool squareriangles(int a, int b, int c)
{
	if ((a*a == b*b + c*c) || (b*b == a*a + c*c) || (c*c == a*a + b*b))
		return true;
	return false;
}
bool trianglesquare(int a, int b, int c)
{
	if (((a*a + b*b == c*c) && (a == b)) || ((b*b + c*c == a*a) && (b == c)) || ((a*a + c*c == b*b) && (a == c)))
		return true;
	return false;
}
void input()
{
	cout << "Nhap lan luot 3 canh cua tam giac : "; cin >> a >> b >> c;
}
void display()
{
	if (exam(a, b, c))
	{
		if (equilateraltriangle(a, b, c))
		{
			cout << "\nTam giac deu";
		}
		
		else
		if (isoscelestriangle(a, b, c))
		{
			cout << "\nTam giac can";
		}
			
		else
		if (squareriangles(a, b, c))
		{
			cout << "\nTam giac vuong";
		}
			
		else
		if (trianglesquare(a, b, c))
		{
			cout << "\nTam giac vuong can";
		}
			
		else
			cout << "\nTam giac thuong";
	}
	else
		cout << "\nTam giac khong hop le";
}
int main()
{
	input();
	display();
	cout << "\n";
	system("pause");
	return 0;
}