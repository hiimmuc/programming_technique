#pragma once
#include"shape_.h"

class Circle:public shape {
public:
	Circle();
	~Circle();
	virtual void draw();
	void erase();
};
