#pragma once

class Complex
{
private:
	double re;
	double im;
public:
	Complex();
	Complex(const Complex& obj);
	void abs();
	void Display();
	~Complex();
};
void initz3();