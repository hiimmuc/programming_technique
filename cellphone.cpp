#include "cellphone.h"
#include "camera.h"
#include "fmdevice.h"
#include "phone.h"
#include<iostream>

using namespace std;
cellphone::cellphone()
{
	series = 0;
}

cellphone::cellphone(int sku, int cam_series, int fm_series, int series_):phone(sku),camera(cam_series),fmdevice(fm_series)
{
	series = series_;
}

cellphone::~cellphone()
{
	if (series){
		series=0;
	}
}

void cellphone::displayinfor()
{
	cout << "sku: " << sku << "\ncamera series" << camera::get_series() << "\nfm series: "
		<< fmdevice::get_series() << endl;
}

void cellphone::turn_fm_on()
{
	turnon();
}

void cellphone::turn_fm_off()
{
	turnoff();
}

void cellphone::set_fm_freq(int freq_)
{
	set_freq(freq_);
}
