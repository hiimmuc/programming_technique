//#include<iostream>
//#include<iomanip>
//#include<stdio.h>
//#include<conio.h>
//#include<string.h>
//#include"llist.h"
//#define mssv 7
//
//using namespace std;
//
//class D;
//class C;
//class D {
//public:
//	D() { cout << "D() " << endl; }
//	D(int) { cout << "D(int) " << endl; }
//	D(const D&) { cout << "D(D&) " << endl; }
//	D(const C&) { cout << "D(C&) " << endl; }
//
//	virtual ~D() { cout << "~D() " << endl; }
//	void operator =(const D&) { cout << "D::=(D&) " << endl; }
//	void operator =(const C&) { cout << "D::=(C&) " << endl; }
//
//	virtual void f(D&) { cout << "D::f() " << endl; }
//	virtual void f(const D&) { cout << "D::f(const) " << endl; }
//	virtual void f(D&) const { cout << "D::f() const" << endl; }
//	virtual void f(const D&) const { cout << "D::f(const) const " << endl; }
//};
//class C :public D {
//public:
//	C() { cout << "C() " << endl; }
//	C(const D&) { cout << "C(D) " << endl; }
//	C(const C&) { cout << "C(C) " << endl; }
//
//	virtual ~C() { cout << "~C() " << endl; }
//	void operator =(int) { cout << "C::=(int): " << mssv << endl; }
//
//	virtual void f(D&) { cout << "C::f() " << endl; }
//	virtual void f(const D&) { cout << "C::f(const) " << endl; }
//	virtual void f(D&) const { cout << "C::f() const" << endl; }
//	virtual void f(const D&) const { cout << "C::f(const) const " << endl; }
//};
//void g1(D d) { d.f(d); }
//void g2(C c) { c.f(c); }
//void g3(D& d) { d.f(d); }
//void g4(C& c) { c.f(c); }
//
//typedef struct sv {
//	char hoten[50];
//	char tuoi[1];
//	enum { nam, nu } gioitinh;
//	char dienthoai[15][2];
//	struct {
//		char thanhpho[20];
//		char duong[20];
//		int sonha;
//	}diachi;
//};
//sv SV;
//int s = sizeof(sv);
//
//void fff(int* x) {
//	x = new int;
//	*x = mssv + 5;
//}
//int y = mssv + 2;
//void fff_(int& x) {
//	x = y;
//	x = mssv + 5;
//}
//int& g(int& x) {
//	x += mssv;
//	return x;
//}
//int fff__(int x, int& y) {
//	x = 5;
//	return y++;
//}
//
//class math {
//public:
//	 static double sum(double x, double y) {
//		return x + y;
//	}
//};
//
//class A {
//public:
//	A() {
//		cout << " A(): 56" << endl;
//	}
//	virtual ~A() {
//		cout << "~A(): 61" << endl;
//	}
//};
//class B:public A {
//public:
//	B() {
//		cout << " B(): 49" << endl;
//	}
//	virtual ~B() {
//		cout << "~B(): 21" << endl;
//	}
//};
//class T {
//public:
//	T(A x) {
//		cout << "T(A): 45" << endl;
//	}
//	virtual ~T() {
//		cout << "~T(): 29" << endl;
//	}
//	operator B() {
//		cout << "B(T): 23" << endl;
//		return B();
//	}
//};
//
//void f(A x) {
//	cout << "f(A): 31" << endl;
//}
//void g(const A& x) {
//	cout << "g(A): 59" << endl;
//}
//
//class pet {
//public:
//	pet() {
//		cout << "pet" << endl;
//	}
//	virtual ~pet(){ }
//};
//class winged {
//public:
//	winged() {
//		cout << "winged" << endl;
//	}
//	virtual ~winged() { }
//};
//class dog:public pet{
//public:
//	dog() {
//		cout << "dog" << endl;
//	}
//	virtual ~dog(){ }
//};
//class bird :public pet,protected winged {
//public:
//	bird() {
//		cout << "bird" << endl;
//	}
//	virtual ~bird() { }
//};
//
//// Recursive function that returns square root 
//// of a number with precision upto 5 decimal places 
//double Square(double n, double i, double j)
//{
//	double mid = (i + j) / 2;
//	double mul = mid * mid;
//
//	// If mid itself is the square root, 
//	// return mid 
//	if ((mul == n) || (abs(mul - n) < 0.00001))
//		return mid;
//
//	// If mul is less than n, recur second half 
//	else if (mul < n)
//		return Square(n, mid, j);
//
//	// Else recur first half 
//	else
//		return Square(n, i, mid);
//}
//
//// Function to find the square root of n 
//void findSqrt(double n)
//{
//	double i = 1;
//
//	// While the square root is not found 
//	bool found = false;
//	while (!found) {
//
//		// If n is a perfect square 
//		if (i * i == n) {
//			cout << fixed << setprecision(0) << i;
//			found = true;
//		}
//		else if (i * i > n) {
//
//			// Square root will lie in the 
//			// interval i-1 and i 
//			double res = Square(n, i - 1, i);
//			cout << fixed << setprecision(5) << res;
//			found = true;
//		}
//		i++;
//	}
//}
////myself
//double squrt_(int number, int precision) {
//	cout << "nam: " << endl;
//	//set precision
//	double acc = 1.0;
//	for (int i = 0; i < precision; ++i) {
//		acc /= 10.f;
//	}
//	//cout << acc << endl;
//	double sqrt = (double)(number / 2.0);
//	double temp = 0; 
//	//cout << temp << endl;
//	while ((temp - sqrt) >= acc || (temp - sqrt) <= -acc) {
//		//temp-sqrt is SAI SO
//		temp = sqrt;
//		sqrt = (number / temp + temp) / 2.0;
//		cout <<"temp: "<< temp << endl;
//		cout <<"sqrt: "<< sqrt << endl;
//	}
//	return (double)sqrt;
//}
////hoang part
//double squrt_2(const int& number, const double& precision,const double& x_o, double& sqrt) {
//	sqrt = 0.5 * (x_o + (double)(number / x_o));
//	//cout << "x_o: " << x_o<< endl;
//	//cout << "sqrt: " << sqrt << endl;
//	double error = sqrt * sqrt - number;
//	printf("%8.6lf\n", error);
//	if (error <= precision || error <= -precision) { return (double)sqrt; }
//	return squrt_2(number, precision, sqrt, sqrt);
//}
//
//void main() {
//	//...something here
//
//	//int x, y;
//	//char tmp[100];
//	////x = y = 5;
//	////scanf_s("%d %d", &x,&y);
//	//printf("x =: %d\n", x);
//	//printf("y =: %d\n", y);
//	//printf("ans :%d", (x++ + --y));
//
//	//char tmp = 0x56;
//	//tmp = (tmp & 0xf0);
//	//tmp = (0xA1b6);
//	//printf("0x%x\n",tmp);
//
//	//list probs:
//
//	//LLIST a = llInit();
//	////give list a some values
//	//a = llInsertHead(a, mssv);
//	//for (int i = 1; i <= 5; ++i) {
//	//	a = llInsertTail(a, mssv + i);
//	//}
//	//for (int i = 0; i < llLength(a); ++i) {
//	//	printf("list[%d] : %0.1f\n", i + 1, (float)llSeek(a, i)->data);
//	//}
//	////find x
//	//float x;
//	//float temp;
//	//printf("\ninput X: ");
//	//scanf_s("%f", &x);
//	//for (int i = 0; i < llLength(a); ++i) {
//	//	temp = (float)llSeek(a, i)->data;
//	//	if (x == temp && x < mssv + 5) {
//	//		printf("found x\nthe neext element is: %d", llSeek(a, i + 1)->data);
//	//		break;
//	//	}
//	//	else if (x == llSeek(a, llLength(a)-1)->data) {
//	//		printf("x at the end\n");
//	//		break;
//	//	}
//	//	else if (i == 5 && (x - llSeek(a, i + 1)->data != 0)) {
//	//		printf("notfound\n");
//	//	}
//	//}
//
//	//fragment problems: 
//
//	////fragment 1:
//	//cout << "SOLUTION:\nfragment 1: " << endl;
//	//C c1, c2(1);
//	//D d1, d2(1);
//	////fragment 2:
//	//cout << "\nfragment 2: " << endl;
//	//c1 = 1;
//	//d1 = 1;
//	////fragment 3:
//	//cout << "\nfragment 3: " << endl;
//	//d1 = c1;
//	//c2 = d2;
//	////fragment 4:
//	//cout << "\nfragment 4: " << endl;
//	//D& d3 = d1;
//	//const D& d4 = c1;
//	//d3.f(d1);
//	//d1.f(d3);
//	//d4.f(c1);
//	////fragment 5:
//	//cout << "\nfragment 5: " << endl;
//	//c1.f(d4);
//	//c2.f(c1);
//	//c1.f(c2);
//	//d3.f(d4);
//	//d4.f(d3);
//	////frafment 6:
//	//cout << "\nfragment 6: " << endl;
//	//g1(c1);
//	//g2(c1);
//	////fragment 7:
//	//cout << "\nfragment 7: " << endl;
//	//g1(d1);
//	//g2(d1);
//	////fragment 8:
//	//cout << "\nfragment 8: " << endl;
//	//g3(c1);
//	//g4(c1);
//	//g3(d1);
//	////fragment 9:
//	//cout << "\nfragment 9: " << endl;
//	//g1(5);
//	//g1(5);
//	////fragment 10:
//	//cout << "\nfragment 10: \nPROGRAM FINISHED...." << endl;
//
////struct sv
//	/*cout << s << endl;
//	cout << sizeof(SV.diachi);*/
//
////prob 1 2 3 about array-> prob 6-> prob 4
//
//	//char* s1 = _strdup("abc");
//	//char* s2 = (char*)malloc(10);
//	//char s3[] = "abc";
//	////s1
//	//strcpy(s1, "def");
//	////s1 = 't';
//	//*s1 = 't';
//	//s1[1] = 't';
//	////s1[2, 3, 4] = "def";
//	////s1[2] = "def";
//	//s1 = _strdup("abc");
//	////*s1 = "def";
//	//
//	////s2
//	//strcpy(s2, "def");
//	////s2 = 't';
//	//*s2 = 't';
//	//s2[1] = 't';
//	////s2[2, 3, 4] = "def";
//	////s2[2] = "def";
//	//s2 =_strdup("def");
//	////*s2 = "def";
//	//
//	////s3
//	//strcpy(s3, "def");
//	////s3 = 't';
//	//*s3 = 't';
//	//s3[1] = 't';
//	////s3[2, 3, 4] = "def";
//	////s3[2] = "def";
//	////s3 = _strdup("abc");
//	////*s3 = "def";
//	//
//	//printf("\n%s", s1);
//	//printf("\n%s", s2);
//	//printf("\n%s", s3);
//
//	//int a = mssv * 3;
//	//float b = mssv - mssv / 10.f;
//	//cout << a
//	//	<< setprecision(3)
//	//	<< fixed
//	//	<< setw(7)
//	//	<< b;
//	 
//	//int a[] = { 1,2,3,4,5,6,7,8,9,10 };
//	//int* p = a + (mssv % 4) + 1;
//	//*(p + 2) = mssv;
//	//*p += (mssv % 3);
//	//p[1] = 10;
//	//for (int i = 0; i < 10; ++i) {
//	//	cout << a[i]<<" ";
//	//}
//
////prob 10 11 12
//
//	//int a = mssv + 3;
//	//fff(&a);
//	//cout << a << endl;
//	//a = mssv + 1;
//	//fff_(a);
//	//cout << a << endl;
//	//
//	//for (int i = mssv - 2; i < mssv + 10; i += 2) {
//	//	cout << i << " ";
//	//	if (i % 3 == (mssv % 3))	continue;
//	//	if (i % 5 == (mssv % 5))	break;
//	//}
//
////prob 7
//	
//	////int a = 10;
//	////g(a) *= mssv;
//	////cout << a << endl;
//
//	//char *s;
//	//cout << sizeof(s) << endl;
//	//printf("%d", sizeof(s));
//	////math m;
//	////cout << m.math::sum(2, 5);
//
//
//////final exam
////
////	//section 1:
////	cout << "SOLUTION:\nsection 1: " << endl;
////	A a;
////	B b;
////	T t1(a), t2 = b;
////	//section 2:
////	cout << "\nsection 2: " << endl;
////	a = t1;
////	b = t2;
////	//section 3:
////	cout << "\nsection 3: " << endl;
////	t1 = a;
////	t2 = b;
////	//section 4:
////	cout << "\nsection 4: " << endl;
////	f(a);
////	f(b);
////	f(t1);
////	//section 5:
////	cout << "\nsection 5: " << endl;
////	g(a);
////	g(b);
////	g(t1);
////	//frafment 6:
////	cout << "\nsection 6: \nPROGRAM FINISHED...." << endl;
//
//	//dog* d = new dog();
//	//bird* b_ = new bird();
//	//delete d;
//	//delete b_;
//	//int n;
//	//cout << "enter number: " << endl;
//	//cin >> n;
//	//double sqrt = n;
//	//double ans = squrt_(n, 3);//nam
//	//cout << "hoang: " << endl;
//	//double ans_2 = squrt_2(n, 0.001, (sqrt / 2.0), sqrt);//hoang
//	//printf("Nam's answer:\nsquare root of %d is %lf\n", n, ans);
//	//printf("Hoang's answer:\nsquare root of %d is %lf\n", n, ans_2);
//	
//	_getch();
//}
