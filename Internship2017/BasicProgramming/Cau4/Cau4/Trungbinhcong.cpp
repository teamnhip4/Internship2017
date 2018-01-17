#include "stdio.h"
#include "iostream"
using namespace std;
int a, b, c;
int average(int a, int b, int c)
{
	return double((a + b + c) / 3.0);
}
void input()
{
	cout << "Nhap lan luot vao 3 so nguyen : "; cin >> a >> b >> c;
}
int main()
{
	input();
	cout << "Trung binh cong cua (" <<a<< "+" <<b<< "+" <<c<< ")/3" "= " <<average(a,b,c);
	cout << "\n";
	system("pause");
	return 0;
}