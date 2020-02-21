#pragma once
class student {
private:
	int id;
	char* stdname;
public:
	static char* somename;
	void getid(int id);
	void getname(const char*stdname);
	int setid(void);
	char* setname(void);
	student();
	student(int id_, const char* name_);
	~student();
};
