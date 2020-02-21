#pragma once
#ifndef rectangular.h
#endif // !rectangular.h
#include"shape_.h"
class rectangular {
private:
	double width;
	double height;
public:
	rectangular();
	rectangular(double w, double h);
	~rectangular();
	double setwidth();
	double set_height();
	friend class square;
};
class square {
private:
	double side;
public:
	square();
	square(double side_);
	~square();
	double set_side();
	void convert_rect_width(rectangular r);
	void convert_rect_height(rectangular r);
};
class Rec:public shape {
public:
	Rec();
	~Rec();
	virtual void draw();
	void erase();
};