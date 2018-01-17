#include "stdio.h"
#include "iostream"
using namespace std;
int n;
int reversenumbers(int n)
{
	int reverNumbers = 0;
	while (n > 0)
	{
		int tam = n % 10;
		reverNumbers = reverNumbers * 10 + tam;
		n = n / 10;
	}
	return reverNumbers;
}

void Input()
{
	cout << "\nNhap so can dao nguoc = "; cin >> n;
}
int main()
{
	Input();
	cout << "\nSo dao nguoc = " << reversenumbers(n);
	cout << "\n";
	system("pause");
	return 0;
}