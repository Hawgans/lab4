#pragma once

class Tiles
{
private:
	char* brand;
	double size_h, size_w;
	double price;
public:
	Tiles(char* b, double sh, double sw, double p);
	Tiles(const Tiles& obj);
	void Display();
	~Tiles();
};
void initz2();