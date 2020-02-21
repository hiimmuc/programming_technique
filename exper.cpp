#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>

//tnvl

//double cal_aver(float var[], int size) {
//	double tmp=0;
//	for (int i = 0; i < size; ++i) {
//		tmp += (double)var[i];
//	}
//	return (double)tmp / size;
//}
//
//double cal_error(float err[], int size,double aver) {
//	double tmp1=0.0, tmp2=0.0;
//	for (int i = 0; i < size; ++i) {
//		tmp1 += pow((err[i]-aver),2);
//	}
//	for(int i = 0; i < size; ++i) {
//		tmp2 = sqrt((tmp1) / size);
//	}
//	return (double)tmp2;
//}
//void main() {
//	float* day_so;
//	int size;
//	int ans = 0;
//input:
//	system("cls");
//	printf_s("enter number of time: "); scanf_s("%d", &size);
//	day_so = (float*)calloc(size , sizeof(float));
//	for (int i = 0; i < size; i++) {
//		printf_s("num %d: ", i + 1);
//		scanf_s("%f", &day_so[i]);
//	}
//
//	printf_s("average number: %.4f\n", cal_aver(day_so, size));
//	printf_s("s.d= %.4f\ns.d= %.4f", cal_error(day_so, size, cal_aver(day_so, size)),cal_error(day_so, size, cal_aver(day_so, size))/sqrt(size));
//	printf_s("\nenter again:\n1.yes\n2.no:\nyou choose: ");
//	scanf_s("%d",&ans);
//	switch (ans)
//	{
//	case 1:goto input; break;
//	case 2:break;
//	default:
//		break;
//	}
// 
//	_getch();
//}

//fibonancci

//int fin(int n) {
//	if (n <= 1) {
//		return n;
//	}
//	return fin(n - 1) + fin(n - 2);
//}
//
//void main() {
//	int n = 0;
//	input:
//	scanf_s("%d", &n);
//	printf_s("%ld\n", fin(n));
//	_getch();
//	goto input;
//}