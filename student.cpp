//constructor&destructor
#include<iostream>
#include<conio.h>
#include<string.h>
#include"student.h"

using namespace std;

char* student::somename = NULL;
student::student()
{
	cout << "start" << endl;
	int id = 0;
	stdname = NULL;
}
student::student(int id_, const char* name_)
{
	id = id_;
	if (stdname) {
		delete stdname;
	}
	if (!name_) {
		stdname = NULL;
		return;
	}
	stdname = new char[strlen(name_) + 1];
	strcpy(stdname, name_);
}
student::~student()
{
	if (stdname) {
		delete stdname;
	}
}
int student::setid(void) {
	return id;
}
char* student::setname(void) {
	return stdname;
}
void student::getid(int id_) {
	id = id_;
}
void student::getname(const char* name_) {
	if (stdname) {
		delete stdname;
	}
	if (!name_) {
		stdname = NULL;
		return;
	}
	stdname = new char[strlen(name_) + 1];
	strcpy(stdname, name_);
}


