#pragma once
class phone {
private:
	int series;
protected:
	int sku;
	int number;
public:
	phone();
	phone(int sku_);
	~phone();
	void get_number(int num);
	void call();
	int get_sku();
};