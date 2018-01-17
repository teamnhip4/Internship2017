#include "stdio.h"
#include "iostream"
using namespace std;

#define MAX 100 


void input(int a[][MAX], int row, int col)
{	
	
	cout << "\ninput array :" << endl;
	for (int n = 0; n < row; n++)
	{
		for (int m = 0; m < col; m++)
		{
			cout << "a[" << n << "][" << m << "] = ";
			cin >> a[n][m];
		}
	}
}
void output(int a[][MAX], int row, int col)
{
	for (int n = 0; n < row; n++)
	{
		for (int m = 0; m < col; m++)
		{
			cout <<"\t"<< a[n][m];
		}
		cout << endl;
	}
}
int min(int a[][MAX], int row, int col)
{
	int min = a[0][0];
	for (int n = 0; n < row; n++)
	{
		for (int m = 0; m < col; m++)
		{
			if (a[n][m] < min)
			{
				min = a[n][m];
			}
		}
	}
	return min;
}
bool checkPrimeNumber(int n)
{
	int cout = 0;
	for (int i = 1; i <= n; i++)
	{
		if (n%i == 0)
		{
			cout++;
		}
	}
	if (cout == 2)
		return true;
	else
	{
		return false;
	}
}
void listPrimeNumber(int a[][MAX], int row, int col)
{
	for (int n = 0; n < row; n++)
	{
		for (int m = 0; m < col; m++)
		{
			if (checkPrimeNumber(a[n][m]))
			{
				cout << " " << a[n][m];
			}
		}
	}
}
void sort(int a[][MAX], int row, int col)
{
	for (int n = 0; n < row; n++)
	{
		for (int m = 0; m < col; m++)
		{
			for (int i = 0; i < row; i++)
			{
				for (int j = 0; j < col; j++)
				{
					if (a[n][m]>a[i][j])
					{
						int temp;
						temp = a[n][m];
						a[n][m] = a[i][j];
						a[i][j] = temp;
					}
				}
			}
		}
	}
}
int main()
{
	int a[MAX][MAX];
	int row, col;
	cout << "\ninput row and column : "; cin >> row >> col;
	input(a,row,col);
	cout << "\narray just input :" << endl;
	output(a, row, col);
	cout << endl;
	cout << "min = " << min(a, row, col);
	cout << endl;
	//cout << "So nguyen to :" << endl;
	cout << " So nguyen to :"; 
	listPrimeNumber(a, row, col);
	cout << endl;
	sort(a, row, col);
	cout << "\nsort descending by column : " << endl;
	output(a, row, col);
	cout << endl;
	system("pause");
	return 0;
}