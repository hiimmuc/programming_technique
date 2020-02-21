#include"phone.h"
#include<iostream>
#include "fmdevice.h"

using namespace std;

fmdevice::fmdevice()
{
	freq = 0;
	series = 0;
}
fmdevice::fmdevice(int series_)
{
	series = series_;
}
fmdevice::~fmdevice()
{
	if (series) {
		series = 0;
	}
}

int fmdevice::get_series()
{
	return series;
}

void fmdevice::turnon()
{
	cout << "\nfm is on\n/*==================*/\nyou can listen to radio now";
}

void fmdevice::turnoff()
{
	cout << "\nthe fm device is off";
}

void fmdevice::set_freq(int freq_)
{
	freq = freq_;
	cout << "\nthe frequence is" << freq << "Hz" << endl;
}
