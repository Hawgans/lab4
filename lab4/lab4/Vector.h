#pragma once

class Vector
{
private:
	int x, y, z;
public:
	Vector();
	Vector(const Vector& obj);
	void Display();
	~Vector();
};
void initz4();