#include "stdio.h"
#include "iostream"
int a, b;
using namespace std;
int total()
{
	return a + b;
}
int m_minus()
{
	return a - b;
}
int multiplication()
{
	return a * b;
}
int main()
{
	cout << "Nhap vao lan luot 2 so nguyen : "; cin>>a>>b;
	cout << "\nTong hai so nguyen : " << a << "+" << b << "=" <<total();
	cout << "\nHieu hai so nguyen : " << a << "-" << b << "=" << m_minus();
	cout << "\nTich hai so nguyen : " << a << "*" << b << "=" << multiplication();
	cout << "\n";
	system("pause");
	return 0;
}