#include "iostream"
#include "string"
#include "fstream"
#include "stdio.h"
#define MAX 50
using namespace std;
void inputArray(int a[][MAX], int row, int col)
{
	cin.ignore();
	ofstream outfile;
	outfile.open("array.txt", ios::out);
	for (int n = 0; n < row; n++)
	{
		for (int m = 0; m < col; m++)
		{
			cout << "a[" << n << "][" << m << "] = ";
			fflush(stdin);
			cin >> a[n][m];
			outfile << a[n][m] << endl;
		}
	}
	outfile.close();
}
void outputArray(int a[][MAX], int row, int col)
{
	ifstream infile("array.txt", ios::in);
	if (!infile)
	{
		cout << "\nfile error" << endl;
	}
	else
	{
		for (int n = 0; n < row; n++)
		{
			for (int m = 0; m < col; m++)
			{
				cout << "\t"<<a[n][m];
			}
				cout << endl;
		}
	
	}	
}

void sort(int a[][MAX], int row)
{
	ifstream infile("array.txt", ios::in);
	if (!infile)
	{
		cout << "\nfile error" << endl;
	}
	else
	{
		for (int i = 0; i < row; i++)
		{
			for (int j = i + 1; j < row; j++)
			{
				int  min = a[i][i];
				if (a[j][j] < min)
				{
					min = a[j][j];
					a[j][j] = a[i][i];
					a[i][i] = min;
				}
			}
		}
	}
	infile.close();
}
int main()
{
	int a[MAX][MAX];
	int row, col;
	cout << "\ninput row and column : "; cin >> row >> col;
	inputArray(a, row, col);
	cout << "\narray just input : " << endl;
	outputArray(a, row, col);
	sort(a, row);
	cout << "\narray just sort : " << endl;
	outputArray(a, row, col);
	cout << endl;
	system("pause");
	return 0;
}
