//#include"Srtring.h"
//#include <cstddef>
//#include <string.h>
//
//string::string()
//{
//	str = NULL;
//}
//
//string::string(const char* s)
//{
//	str = NULL;
//	set(s);
//}
//
//string::~string()
//{
//	if (str) {
//		delete str;
//	}
//}
//
//void string::set(const char* s)
//{
//	if (str) {
//		delete str;
//	}
//	if (!s) {
//		str = NULL;
//		return;
//	}
//	str = new char[strlen(s) + 1];
//	strcpy(str, s);
//}
//
//const char* string::set()
//{
//	return str;
//}