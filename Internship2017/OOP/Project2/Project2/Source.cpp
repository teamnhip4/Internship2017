#include "Rectangle.h"
#include "Circle.h"
#include <iostream>
#include <vector>
using namespace std;
vector<Shape*> *list = new vector<Shape*>();
int menu()
{
	cout << endl;
	cout << "--------------MENU------------" << endl;
	cout << "1. Input Circle" << endl;
	cout << "2. Input Rectangle" << endl;
	cout << "3. Display area list" << endl;
	cout << "4. Exit" << endl;
	cout << "Choose: ";
	int choose = 0;
	cin >> choose;
	return choose;
}
void inputCircle()
{
	int radius;
	cout << "Input radius for this circle: ";
	cin >> radius;
	Shape *cir = new Circle(radius);
	list->push_back(cir);
}

void inputRectangle()
{
	int width, height;
	cout << "Input width for this rectangle: ";
	cin >> width;
	cout << "Input height for this rectangle: ";
	cin >> height;
	Shape *rec = new Rectangle(width, height);
	list->push_back(rec);
}

void displayList()
{
	cout << endl;
	cout << "--------------LIST--------------" << endl;
	cout << endl;
	int count = 1;
	for (Shape *shape : *list)
	{
		cout << "\t+ SHAPE " << count <<" +"<< endl;
		++count;
		shape->display();
		cout << endl;
	}
}
void action()
{
	while (true)
	{
		switch (menu())
		{
		case 1:
			inputCircle();
			break;
		case 2:
			inputRectangle();
			break;
		case 3:
			displayList();
			break;
		case 4:
			exit(0);
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