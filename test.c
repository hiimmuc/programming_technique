//#include<stdio.h>
//#include<conio.h>
//#include<stdlib.h>
//#include<ctype.h>
//#include<time.h>
//#include<string.h>
//#include <malloc.h>
//#include"matrix.h"
//
//void check_error(FILE* fp) {
//	if (fp == NULL) {
//		printf("NULL");
//		exit(1);
//	}
//}
//
//void main() {
//	int k = 1;
//	int count_row = 0, count_col = 0;
//	FILE* fp;
//	fp = fopen("matrix.txt", "r+");
//	check_error(fp);
//	rewind(fp);
//	char ch;
//	int* size = (int*)calloc(2, sizeof(int));
//	int row, col;
//	////count row and col func
//
//	printf("enter number of mat: ");
//	scanf_s("%c%*c", &ch);
//	
//	row = f_get_row(f_get_size("matrix.txt", ch));
//	col = f_get_col(f_get_size("matrix.txt", ch));
//	printf("\n%d\n%d\n", row, col);	
//	float** mat = allocate_mat(row, col);
//	get_matrix(mat, ch, row, col, "matrix.txt");
//	print_mat(mat, row, col);
//
//	rewind(fp);
//	printf("enter number of mat: ");
//	scanf_s("%c%*c", &ch);
//	
//	row = f_get_row(f_get_size("matrix.txt", ch));
//	col = f_get_col(f_get_size("matrix.txt", ch));
//	printf("\n%d\n%d\n", row, col);
//	mat = allocate_mat(row, col);
//	get_matrix(mat, ch, row, col, "matrix.txt");
//	print_mat(mat, row, col);
//
//	print_to_file(mat, row, col);
//	dealloc(mat, row);
//	fclose(fp);
//	_getch();
//
//}
