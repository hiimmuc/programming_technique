//#include<stdio.h>
//
//int main(int argc, char *argv[]){
//	int i;
//	int num=0;
//	input:
//	printf_s("\ncurrent page: ");
//	scanf_s("%d", &num);
//	//page 1-3
//	if (num <= 3 && num > 0) {
//		for (i = 1; i <= 3; i++) {
//			if (num == i) {
//				printf_s("[%d] ", num);
//			}
//			else {
//				printf_s("%d ", i);
//			}
//		}
//		printf_s("... 20");
//	}
//	//page 4
//	else if (num == 4) {
//		printf_s("1 2 3 [4] ... 20");
//	}
//	//page 5-18
//	else if (num >= 5 && num <= 18) {
//		printf_s("1 2 3 ... [%d] ... 20",num);
//	}
//	//page 19
//	else if (num == 19) {
//		printf_s("1 2 3 ... [19] 20");
//	}
//	//page 20
//	else if (num == 20) {
//		printf_s("1 2 3 ... [20]");
//	}
//	//page 0<&&>20
//	else {
//		printf_s("no page found!!");
//	}
//	goto input;
//	_getch();
//	return 0;
//}