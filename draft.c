//#include<stdio.h>
//#include<conio.h>
//#include<stdlib.h>
//#include<time.h>
//#include"matrix.h"
//
//FILE* file;
//
//int main() {
//	//==================================
//	int mode;
//	int type;
//	//file 
//	char mat_num;
//	//==================================
//choice:
//	printf_s("Enter matrix input type:\n Manually(1) or Auto(0):  ");
//	scanf_s("%d", &type);
//	if (type == 1) {
//	input:
//		printf_s("\n>>MODE: \n\
//1.Addition\n\
//2.Subtraction\n\
//3.Multiplication\n\
//4.Gauss_eliminate\n\
//5.Determinant\n\
//6.Inverse_matrix\n\
//7.Eigen_Values\n\
//8.Eigen_Vectors\n\
//9.Random_Matrix\n\
////========================================<<");
//
//
//		printf_s("\nyou choose: "); scanf_s("%d", &mode);
//
//		switch (mode)
//		{
//		case 1: addition(); break;
//		case 2: subtraction(); break;
//		case 3: multiplication(); break;
//		case 4: gauss_elimination(); break;
//		case 5: determinant(); break;
//		case 6: inverse_mat(); break;
//		case 7: eigen_values(); break;
//		case 8: eigen_vectors(); break;
//		case 9: create_random_mat(); break;
//		default:printf_s("\n\nWRONG mode!!!\nEnter again:\n"); goto input;
//			break;
//		}
//		int ans;
//		printf_s("\nPress any keys to continue......");
//		_getch();
//		printf_s("\n/===========\nCalculate again: \n1.yes\n2.No\nyour choice: ");
//		scanf_s("%d%*c", &ans);
//		//
//		switch (ans)
//		{
//		case 1: system("cls"); goto input; break;
//		case 2:printf_s("\n>>End program......\n/*================================================================*/"); break;
//		default:
//			break;
//		}
//	}
//	else if (type == 0) {
//	input_:
//		printf_s("\n>>MODE: \n\
//1.Addition\n\
//2.Subtraction\n\
//3.Multiplication\n\
//4.Gauss_eliminate\n\
//5.Determinant\n\
//6.Inverse_matrix\n\
//7.Eigen_Values\n\
//8.Eigen_Vectors\n\
//9.Random_Matrix\n\
////========================================<<");
//
//		printf_s("\nyou choose: "); scanf_s("%d%*c", &mode);
//
//		switch (mode)
//		{
//		case 1: f_addition(); break;
//		case 2: f_subtraction(); break;
//		case 3: f_multiplication(); break;
//		case 4: f_gauss_elimination(); break;
//		case 5: f_determinant(); break;
//		case 6: f_inverse_mat(); break;
//		case 7: f_eigen_values(); break;
//		case 8: f_eigen_vectors(); break;
//		case 9: create_random_mat(); break;
//		default:printf_s("\n\nWRONG mode!!!\nEnter again:\n"); goto input_;
//			break;
//		}
//		int ans;
//		printf_s("\nPress any keys to continue......");
//		_getch();
//		printf_s("\n/===========\nCalculate again: \n1.yes\n2.No\nyour choice: ");
//		scanf_s("%d%*c", &ans);
//		//
//		switch (ans)
//		{
//		case 1: system("cls"); goto input_; break;
//		case 2:printf_s("\n>>End program......\n/*================================================================*/"); break;
//		default:
//			break;
//		}
//	}
//	else {
//		goto choice;
//	}
//	return 0;
//}
