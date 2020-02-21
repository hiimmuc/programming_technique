#include "shape_.h"
#include<iostream>

using namespace std;
shape::shape()
{
}

shape::~shape()
{
}

void shape::draw()
{
	cout << "shape::draw\n";
}

void shape::erase()
{
	cout << "shape::erase\n";
}

void shape::redraw()
{
	erase(); draw();
}

