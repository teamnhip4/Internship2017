#include "stdio.h"
#include "iostream"

using namespace std;

int month, year;
bool exam(int nam)
{
	if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0))
		return true;
	return false;
}
void input()
{
	cout << "\nNhap lan luot thang va nam : "; cin >> month >> year;
}
void display()
{
	switch (month)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		cout << "\nThang " << month << " nam " << year << " co 31 ngay" << endl;
		break;
	case 2:
		if (exam(year) == 1)
			cout << "\nThang " << month << " nam " << year << " co 29 ngay" << endl;
		else
			cout << "\nThang " << month << " nam " << year << " co 28 ngay" << endl;
		break;
	case 4:
	case 6:
	case 9:
	case 11:
		cout << "\nThang " << month << " nam " << year << " co 30 ngay" << endl;
		break;
	default:
		cout << "Thang ban nhap: " << month << " khong hop le"<< endl;
		break;
	}
}
int main()
{
	input();
	display();
	cout << "\n";
	system("pause");
	return 0;
}