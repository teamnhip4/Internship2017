#include "stdio.h"
#include "iostream"

using namespace std;
int cd, cr;
void menu()
{
	cout << "---------------TINH DIEN TICH---------------" << endl;
	cout << "An 1. Dien tich hinh chu nhat" << endl;
	cout << "An 2. Dien tich hinh voong" << endl;
	cout << "An 3. Dien tich hinh tron" << endl;
}
int selectedmenu()
{
	int n = 0;
	cout << "Chon: ";
	cin >> n;
	if (n > 0 || n < 4)
		return n;
	else
		return selectedmenu();
}
void display()
{
	int selected = selectedmenu();
	switch (selected)
	{
	case 1:
		cout << "Nhap chieu dai = " ; cin >> cd;
		cout << "\nNhap chieu rong = " ; cin >> cr;
		cout << "\nDien tich hinh chu nhat la : "<<(cd*cr) << endl;
		break;
	case 2:
		cout << "Nhap canh hinh vuong = " ; cin >> cd;
		cout << "\nDien tich hinh chu vuong la : " << (cd*4) << endl;
		break;
	case 3:
		cout << "Nhap ban kinh hinh tron = " ; cin >> cd;
		cout << "\nDien tich hinh chu tron la : " << ((cd*cd) * 3.14) << endl;
		break;
	case 4 :
		exit(1);
		break;
	}
}
int main()
{
	menu();
	while (true)
	{
		display();
	}
	cout << "\n";
	system("pause");
	return 0;
}