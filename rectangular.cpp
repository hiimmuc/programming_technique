#include"rectangular.h"
#include "shape_.h"
#include<iostream>
using namespace std;
rectangular::rectangular() {
	width = 0.0;
	height = 0.0;
}
rectangular::rectangular(double w, double h)
{
	width = w;
	height = h;
}

rectangular::~rectangular()
{
	//delete
}

double rectangular::setwidth()
{
	return width;
}

double rectangular::set_height()
{
	return height;
}

square::square()
{
	side = 0.0;
}

square::square(double side_)
{
	side = side_;
}

square::~square()
{
	//delete?

}

double square::set_side()
{
	return side;
}

void square::convert_rect_width(rectangular r)
{
	side = r.width;
}

void square::convert_rect_height(rectangular r)
{
	side = r.height;
}

Rec::Rec():shape()
{
}

Rec::~Rec()
{
}

void Rec::draw()
{
	cout << "rec::draw\n";
}

void Rec::erase()
{
	cout << "rec::erase\n";
}
