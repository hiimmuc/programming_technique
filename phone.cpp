#include"phone.h"
#include<iostream>

using namespace std;

phone::phone()
{
	number = 0;
	series = 0;
}

phone::phone(int sku_)
{
	sku = sku_;
}

phone::~phone()
{
	if (number) {
		number = 0;
	}
}

void phone::get_number(int num)
{
	number = num;
}

void phone::call()
{
	cout << "calling number:\t" << number << endl;
}

int phone::get_sku()
{
	return sku;
}
