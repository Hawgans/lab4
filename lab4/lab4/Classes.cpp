#include <iostream>
#include "Child.h"
#include "Tiles.h"
#include "Complex.h"
#include "Vector.h"
#include <string>

using namespace std;

void initz1()
{
	string name = "Ragnar";
	string surname = "Lodbrok";
	int age = 34;

	Child per1(name, surname, age);
	Child per2 = per1;
}

Child::Child(string n, string s, int a)
	:Name(n), Surname(s), Age(a)
{
	Display();
}

Child::Child(const Child& obj)
{
	Name = obj.Name;
	Surname = obj.Surname;
	Age = obj.Age;
	Display();
}

Child::~Child()
{
	cout << "Объект удален" << endl;
}


void Child::Display()//функция вывода для Child
{
	cout << "Имя: " << Name << endl;
	cout << "Фамилия: " << Surname << endl;
	cout << "Возраст: " << Age << endl << endl;
}

Tiles::Tiles(char* b, double sh, double sw, double p)
{
	brand = b;
	size_h = sh;
	size_w = sw;
	price = p;
	Display();
}

Tiles::Tiles(const Tiles& obj)
{
	brand = obj.brand;
	size_h = obj.size_h;
	size_w = obj.size_w;
	price = obj.price;
	Display();
}

Tiles::~Tiles()
{
	cout << "Объект удален" << endl;
}

void Tiles::Display()
{
	cout << "Название: " << brand << endl;
	cout << "Высота: " << size_h << endl;
	cout << "Ширина: " << size_w << endl;
	cout << "Цена: " << price << endl << endl;
}

void initz2()
{
	char brand_name[] = "Visconci";
	double high = 45.5;
	double weight = 50;
	double Price = 500;

	Tiles obj1(brand_name, high, weight, Price);
	Tiles obj2 = obj1;
}

Complex::Complex()
{
	re = 56;
	im = 45;
	Display();
}

Complex::Complex(const Complex& obj)
{
	re = obj.re;
	im = obj.im;
	Display();
}

void Complex::abs()//функция определения модуля комплексного числа 
{
	double z = sqrt(re * re + im * im);
	cout << "Модуль комплексного числа: " << z << endl << endl;
}

void Complex::Display()//функция вывода комплексного числа
{
	cout << "z = (" << re << ") + (" << im << ")i" << endl;

	cout << "real = " << re << endl;
	cout << "imagine = " << im << endl << endl;
}
Complex::~Complex()
{
	cout << "Объект удален" << endl;
}

void initz3()
{
	Complex number1;
	number1.abs();
	Complex number2 = number1;
}

Vector::Vector()
{
	x = 6;
	y = 78;
	z = 23;
	Display();
}

Vector::Vector(const Vector & obj)
{
	x = obj.x;
	y = obj.y;
	z = obj.z;
	Display();
}

void Vector::Display()//функция вывода координат векторов
{
	cout << "Координаты вектора: ( " << x << ", " << y << ", " << z << ")" << endl;

	cout << "x = " << x << endl;
	cout << "y = " << y << endl;
	cout << "z = " << z << endl;
}

Vector::~Vector()
{
	cout << "Объект удален" << endl;
}

void initz4()
{
	Vector m;
	Vector n = m;
}