//#include<iostream>
//#include <string>
//#include<conio.h>
//#include "Worker.h"
//#include "Manager.h"
//#include "Director.h"
//#include <vector>
//#include "Department.h"
//
//using namespace std;
//vector<Employee> eList;
//vector<Department> dList;
//Employee searchEmployeeById(int id_) {
//	for (int i = 0; i < eList.size(); i++) {
//		if (eList[i].getID() == id_) {
//			cout << eList[i].getName();
//			return eList[i];
//			//eList.erase(eList.begin() + i);
//		}
//	}
//}
//
//Employee searchDeppartmentByName(string name_) {
//	for (int i = 0; i < dList.size(); i++) {
//		if (dList[i].getName() == name_) {
//			// print info to screen
//			cout << dList[i].getName();
//			return eList[i];
//			//eList.erase(eList.begin() + i);
//		}
//	}
//}
//
//void main()
//{
//	
//	Worker w1(1, "Nam1", 3.9, 1);
//	Worker w2(2, "Nam2", 4.1, 3);
//	Worker w3(3, "Nam3", 3.0, 2);
//
//	Manager m1(1, "Man1", 9.0, 0);
//
//	eList.push_back(w1);
//	eList.push_back(w2);
//	eList.push_back(w3);
//	eList.push_back(m1);
//
//	Department d(1, "It_dept");
//	d.addEmployee(w1);
//	d.addEmployee(m1);
//	m1.setDept(d.getID());
//	dList.push_back(d);
//
//	_getch();
//}