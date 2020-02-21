#pragma once
#include"phone.h"
#include"fmdevice.h"
#include"camera.h"

class cellphone :public phone, public camera, protected fmdevice {
private:
	int series;
public:
	cellphone();
	cellphone(int sku,int cam_series,int fm_series,int series_ );
	~cellphone();
	void displayinfor();
	void turn_fm_on();
	void turn_fm_off();
	virtual void set_fm_freq(int freq_);
};