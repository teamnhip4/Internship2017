#include "ContactView.h"
#include <iostream>
using namespace std;
int menu()
{
	cout << endl;
	cout << "--------------MENU------------" << endl;
	cout << "1. Add" << endl;
	cout << "2. Display" << endl;
	cout << "3. Update" << endl;
	cout << "4. Delete" << endl;
	cout << "5. Search" << endl;
	cout << "6. Load from to file" << endl;
	cout << "7. Say to file" << endl;
	cout << "0. Exit" << endl;
	cout << "Choose: ";
	int choose = 0;
	cin >> choose;
	return choose;
}
void action()
{
	ContactView *view = new ContactView();
	while (true)
	{
		switch (menu())
		{
		case 0:
			exit(0);
		case 1:
			view->addView();
			break;
		case 2:
			view->displayView();
			break;
		case 3:
			view->updateView();
			break;
		case 4:
			view->deleteView();
			break;
		case 5:
			view->searchView();
			break;
		default:
			break;
		}
	}
}
int main()
{
	action();
	cout << endl;
	system("pause");
	return 0;
}