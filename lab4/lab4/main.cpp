#include <iostream>
#include "Child.h"
#include "Tiles.h"
#include "Complex.h"
#include "Vector.h"


using namespace std;

int main()
{
	system("chcp 1251");

	int v;

	cout << "\nВыберите вариант класса:\n" << "1-Child\n" << "2-Tiles\n" << "3-Complex\n" << "4-Vector\n" << endl;
	cin >> v;


	switch (v)
	{
	case 1://работа с классом Child
		initz1();
		break;
	case 2://работа с классом Tiles
		initz2();
		break;
	case 3:
		initz3();
		break;
	case 4:
		initz4();
		break;
	default:
		cout << "Нет введенного варианта" << endl;
		break;

	}
	system("pause");
}