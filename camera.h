#pragma once
class camera {
private:
	int series;
protected:
	int resolution_w;
	int resolution_h;
public:
	camera();
	camera(int series_);
	~camera();
	void set_resolution(int res,int res_);
	int get_series();
	void take_pic();
};