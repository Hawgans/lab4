#pragma once
#include <string>
using namespace std;

class Child
{
private:
	string Name;
	string Surname;
	int Age;
public:
	Child(string n, string s, int a);
	Child(const Child& obj);
	void Display();
	~Child();
};
void initz1();