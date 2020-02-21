#include "camera.h"
#include<iostream>

using namespace std;

camera::camera()
{
	resolution_w = 0;
	resolution_h = 0;
	series = 0;
}

camera::camera(int series_)
{
	series = series_;
}

camera::~camera()
{
	if (series != 0) {
		series = 0;
	}
}

void camera::set_resolution(int res,int res_)
{
	resolution_w = res;
	resolution_h = res_;
}

int camera::get_series()
{
	return series;
}
void camera::take_pic()
{
	cout << "\ntake a pic:\nsmile :D" << "\ninfor of picture: " << resolution_w<<" x "<<resolution_h << endl;
}
