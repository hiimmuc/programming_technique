#pragma once
class shape {
public:
	shape();
	~shape();
	virtual void draw();
	void erase();
	void redraw();
};