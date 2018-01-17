#include "stdio.h"
#include "iostream"
using namespace std;
int n;
void triangleDraw(int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "*";
	}
	cout << endl;
	int row = 1;
	for (int i = 0; i < n - 1; i++)
	{
		for (int i = 0; i < row; i++)
		{
			cout << " ";
		}
		cout << "*";
		for (int j = 0; j < n - row - 2; j++)
		{
			cout << " " ;
		}
		if (row == n - 1)
		{
			break;
		}
		cout << "*" << endl;
		row++;
	}
	
}
void input()
{
	cout << "\nNhap chieu cao n = "; cin >> n;
}
int main()
{
	input();
	triangleDraw(n);
	cout << "\n";
	system("pause");
	return 0;
}