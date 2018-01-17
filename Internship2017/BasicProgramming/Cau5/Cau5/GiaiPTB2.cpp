#include "stdio.h"
#include "iostream"
using namespace std;
int a, b, c, d;
void equation()
{
	if (a == 0)
	{
		if (b == 0)
		{
			if (c == 0)
			{
				cout << "Phuong trinh " << a << "x^2 +" << b << "x +" << c << "= 0 vo so nghiem \n";
			}
				
			else
			{
				cout << "Phuong trinh " << a << "x^2 +" << b << "x +" << c << "= 0 vo nghiem \n";
			}
		}
		else
		{
			cout << "Phuong trinh " << a << "x^2 +" << b << "x +" << c << "= 0 co nghiem X = " << (float)(-c / b);
		}
	}
	else
	{
		d = b*b - 4 * a*c;
		if (d<0)
		{
			cout << "Phuong trinh " << a << "x^2 +" << b << "x +" << c << "= 0 vo nghiem \n";
		}
		if (d == 0)
		{
			cout << "Phuong trinh " << a << "x^2 +" << b << "x +" << c << "= 0 co nghiem kep X1 = X2 = " << (float)-b / (2 * a);
		}
		if (d>0)
		{
			cout << "Phuong trinh " << a << "x^2 +" << b << "x +" << c << "= 0 co 2 nghiem phan biet \n X1 = " << (float)(-b + sqrt(d)) / (2 * a) << "\n X2 = " << (float)(-b - sqrt(d)) / (2 * a);
		}
	}
}
void input()
{
	cout << "Nhap lan luot cac he so a b c : "; cin >> a >> b >> c;
}

int main()
{
	input();
	equation();
	cout << "\n";
	system("pause");
	return 0;
}