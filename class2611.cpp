//// inheritance "continue"
//// virtual method
//
//#include<iostream>
//#include<conio.h>
//#include"shape_.h"
//#include"circle.h"
//#include"rectangular.h"
//#include"cellphone.h"
//#include"camera.h"
//#include"fmdevice.h"
//#include"phone.h"
//
//using namespace std;
//
//void main() {
//	//1
//	/*shape* point[3] = { new shape(), new circle(),new rec() };
//	for (int i = 0; i < 3; ++i) {
//		point[i]->draw();
//	}*/
//	//2
//	int ans;
//	cellphone p;
//	p = cellphone::cellphone(1234,2000,1811,1019);
//	cout << "your phone information\n"; 
//	p.displayinfor();
//	cout << "\n1.call Nam\n2.play fm\n3.use camera\nyou choose:" << endl;
//	cin >> ans;
//	switch (ans)
//	{
//	case 1:
//		p.get_number(912582757);
//		p.call();
//		break;
//	case 2:
//		p.set_fm_freq(144);
//		p.turn_fm_on();
//		p.turn_fm_off();
//		break;
//	case 3:
//		p.set_resolution(1980,1080);
//		p.take_pic();
//	default:
//		printf_s("wrong choice :(( ");
//		break;
//	}
//	printf_s("end program\n/*=================================================*/");
//	_getch();
//}