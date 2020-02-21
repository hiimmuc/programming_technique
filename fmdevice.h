#pragma once
class fmdevice {
private:
	int series;
protected:
	int freq;
public:
	fmdevice();
	fmdevice(int series_);
	~fmdevice();
	int get_series();
	void turnon();
	void turnoff();
	virtual void set_freq(int freq_);
};