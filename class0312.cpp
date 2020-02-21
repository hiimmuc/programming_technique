////===============Chapter10==============//
////function, method and operator overload
//#include<iostream>
//#include <string>
//#include<conio.h>
//#include <vector>
//#include"employees.h"
//#include "worker.h"
//#include "manager.h"
//#include "director.h"
//#include"department.h"
//
//using namespace std;
//vector<employee> eList;
//vector<department> dList;
////list of func
//void creat_em() {
//	int id;
//	int ans = 0;
//	string name;
//	int salary;
//	cout << "input the employee data:\n";
//	cin >> id;
//	cin >> salary;
//	cin >> name;
//	//getline(cin, name);
//	/*employee e(id, name, salary);
//	eList.push_back(e);*/
//	cout << "worker or manager?(1/0):  ";
//	cin >> ans;
//	if (ans == 0) {
//		cout << "level?" << endl;
//		int lev;
//		cin >> lev;
//		worker w(id, name, salary, lev);
//		eList.push_back(w);
//	}
//	if (ans == 1) {
//		cout << "dept?" << endl;
//		int dept;
//		cin >> dept;
//		manager m(id, name, salary, dept);
//		eList.push_back(m);
//	}
//}
//void find_em() {
//	int id;
//	cout << "\nenter id: ";
//	cin >> id;
//	for (int i = 0; i < eList.size(); i++)
//	{
//		if (eList[i].getid() == id) {
//			cout << "\nthe employee name is: " << eList[i].getname() << "\nyour salary is: " << eList[i].getSalary() << endl;
//		}
//	}
//}
//void del_em() {
//
//}
//void create_dept() {
//	int id;
//	int ans = 0;
//	string name;
//	int salary;
//	cout << "input the department data:\n";
//	cin >> id;
//	cin >> name;
//	cin >> salary;
//	department d(id, name);
//	dList.push_back(d);
//}
//void find_dept() {
//	string name;
//	cout << "enter id: ";
//	getline(cin, name);
//	for (int i = 00; i < dList.size(); i++)
//	{
//		if (dList[i].getName() == name) {
//			cout << "\nthe department id is: " << dList[i].getID() << endl;
//		}
//	}
//}
//void main() {
//	int ans = 0;
//	do {
//		cout << "\nMenu:\n\
//1.create an employee\n\
//2.find an employee(by ID)\n\
//3.delete an employee (by ID\n\
//4.create a department:id, name, employee_list\n\
//5.find department(by name)\n\
//0.exit program\nchoice:  ";
//		cin >> ans;
//		switch (ans)
//		{
//		case 1: creat_em(); break;
//		case 2: find_em(); break;
//		case 3: del_em(); break;
//		case 4: create_dept(); break;
//		case 5: find_dept(); break;
//		case 0: cout << "exit program"; break;
//		default: cout << "wrong choice";
//			break;
//		}
//		cout << "\nagain?(1/0): ";
//		cin >> ans;
//	} while (ans == 1);
//	_getch();
//}
////error?
