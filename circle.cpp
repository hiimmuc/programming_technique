#include "shape_.h"
#include<iostream>
#include "circle.h"
using namespace std;

Circle::Circle()
{
}

Circle::~Circle()
{
}

void Circle::draw()
{
	cout << "circle::draw\n";
}

void Circle::erase()
{
	cout << "circle::erase\n";
}
