////lession c C++ 
//
//#include<iostream>
//#include<conio.h>
//constexpr double pi = 3.14;;
//using namespace std;
////1
//class circle {
//private:
//	double r;
//	
//public:
//	void setR(double rr) {
//		r = rr;
//	}
//	double area(){
//		return r * r * pi;
//	}
//	double perimeter(){
//		return 2  *pi*r;
//	}
//};
////2
//class student {
//private:
//	char *name;
//	int id;
//public:
//	student() { 
//		name = '\0';
//		id = 0;
//	}
//	student(char *name_, int id_) {
//		id = id_;
//		name = new char[20];
//		name = name_;
//	}
//
//};
////1
//void main() {
//	/*int n,m;	
//	cout << "enter n,m: ";
//	cin >> n>>m;
//	cout << "n= " << n <<"m= "<< m<<endl;
//	_getch();*/
//	circle c;
//	int r;
//	cin >> r;
//	c.setR(r);
//	cout << "area: " << c.area() << endl
//		<< "perimeter: " << c.perimeter() << endl;
//	_getch();
//
//}
//
////2
////void main(){
////	student s0;
////	char name[]="Nam";
////	student s(name, 10);
////	cout<< name <<endl;
////	_getch();
////}