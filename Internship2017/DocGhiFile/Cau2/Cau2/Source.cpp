#include "iostream"
#include "string"
#include "fstream"
#include "stdio.h"
#define MAX 50
using namespace std;
void inputArray(int a[MAX], int n)
{
	ofstream outfile;
	outfile.open("array.txt", ios::out);
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "] = ";
		cin>> a[i];
		outfile << a[i] << endl;
	}
	outfile.close();
}
void outputArray(int a[MAX], int n)
{
	ifstream infile("array.txt", ios::in);
	if (!infile)
	{
		cout << "\nfile error" << endl;
	}
	else
	{
		cout << "Mang vua nhap  " << endl;
		for (int i = 0; i < n; i++)
		{
			cout << "a[" << i << "] = " << a[i] << endl;
		}
	}	//Error	1	error C4996: 'gets': This function or variable may be unsafe. Consider using gets_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.	f:\demogameloft\baitap\docghifile\cau1\cau1\source.cpp	30	1	Cau1
}
bool checkPrimeNumber(int n)
{
	int cout = 0;
	for (int i = 2; i <= n; i++)
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
void listPrimeNumbers(int a[MAX], int n)
{
	ifstream infile("array.txt", ios::in);
	if (!infile)
	{
		cout << "\nfile error" << endl;
	}
	else
	{
		for (int i = 0; i < n; i++)
		{
			if (checkPrimeNumber(i))
			{
				infile >> a[i] ;
				
			}
			cout <<" "<< a[i];
		}
	}
	infile.close();
}
int main()
{
	int n, a[MAX];
	cout << "So luong phan tu cua mang : "; cin >> n;
	inputArray(a,n);
	outputArray(a,n);
	cout << "\nprime number : " << endl;
	listPrimeNumbers(a, n);
	cout << endl;
	system("pause");
	return 0;
}