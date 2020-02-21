#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<ctype.h>
#include<time.h>
#include<string.h>
#include <malloc.h>
#include"matrix.h"

//some supporting functions
float** allocate_mat(int row,int col) {
	float** mat;
	mat = (float**)malloc(row * sizeof(float*));
	for (int i = 0; i < row; ++i) {
		mat[i] = (float*)calloc(col, sizeof(float));
	}
	return mat;
}

void dealloc(float** mat, int row) {
	for (int i = 0; i < row; ++i) {
		free(mat[i]);
	}
	free(mat);
}

void print_mat(float**mat,int row,int col) {
	printf_s("   Matrix[%d][%d]: \n", row, col);
	for (int i = 0; i < row; ++i) {
		for (int j = 0; j < col; ++j) {
			printf_s("%7.2f",(double) mat[i][j]);
		}
		printf_s("\n");
	}
}

float** scan_mat(float** mat, int row, int col) {
	for (int i = 0; i < row; ++i) {
		for (int j = 0; j < col; ++j) {
			printf_s("pos[%d][%d]= ", i+1,j+1);
			scanf_s("%f%*c", &mat[i][j]);
		}
		printf_s("\n");
	}
	return mat;
}

float** random_float_mat(int row, int col, float min, float max)
{
	time_t t;
	srand((int)time(&t));
	float* temp = (float*)calloc((row * col), sizeof(float));
	float** ans = allocate_mat(row, col);
	for (int i = 0; i < (row*col); ++i) {
		temp[i] = min + (rand() / (float)RAND_MAX)* (max  - min);
	}
	for (int i = 0; i < row; ++i) {
		for (int j = 0; j < col; ++j) {
			ans[i][j] = *(temp + (i * row) + j);
		}
	}
	return ans;
}

float** random_int_mat(int row, int col, int min, int max) {
	time_t t;
	srand((int)time(&t));
	int* temp = (int*)calloc((row * col), sizeof(int));
	float** ans = allocate_mat(row, col);
	for (int i = 0; i < (row * col); ++i) {
		temp[i] = (min + rand() % (max + 1 - min));
	}
	for (int i = 0; i < row; ++i) {
		for (int j = 0; j < col; ++j) {
			ans[i][j] =(float)(*(temp + (i * row) + j));
		}
	}
	return ans;
}

void copy_mat(float** mat1, float** mat2, int row, int col) {
	for (int i = 0; i < row; ++i) {
		for (int j = 0; j < col; ++j) {
			mat1[i][j] = mat2[i][j];
		}
	}
}

/*====================================================================*/
//matrix core functions

//add
float** ADD_matrix(float** mat1, float** mat2, int row,int col)
{
	int i, j;
	float** result = allocate_mat(row, col);
	for (i = 0; i < row; i++) {
		for (j = 0; j < col; j++) {
			result[i][j] = mat1[i][j] + mat2[i][j];
		}
	}
	return result;
}

//sub
float** SUBTRACT_matrix(float** mat1, float** mat2, int row, int col)
{
		int i, j;
		float** result = allocate_mat(row, col);
		for (i = 0; i < row; i++) {
			for (j = 0; j < col; j++) {
				result[i][j] = mat1[i][j] - mat2[i][j];
			}
		}
		return result;
}

//mul
float** MUL_matrix(float** mat1, float** mat2, int row, int col)
{
	int i, j, k;
	float tmp = 0.0;
	float** result = allocate_mat(row, col);
	for (i = 0; i < row; i++) {
		for (j = 0; j < col; j++) {
			for (k = 0; k < col; k++) {
				tmp = tmp + mat1[i][k] * mat2[k][j];
			}
			result[i][j] = tmp;//copy to result
			tmp = 0;//reset tmp value to zero
		}
	}
	return result;
}

//gauss
int* countZero(float** mat, int row, int col, int mode) {
	int* count;
	//count in row
	if (mode == 1) {
		count = (int*)calloc(row, sizeof(int));
		for (int i = 0; i < row; ++i) {
			for (int j = 0; j < col; ++j) {
				if (mat[i][j] == 0) {
					count[i] += 1;
				}
				if (mat[i][j] != 0) {
					break;
				}
			}
		}
		return count;
	}
	//count in col beta
	if (mode == 0)
	{
		count = (int*)calloc(col, sizeof(int));
		for (int i = 0; i < col; ++i) {
			for (int j = row-1; j >=0; --j) {
				if (mat[j][i] == 0) {
					count[i] += 1;
				}
				if (mat[j][i] != 0) {
					break;
				}
			}
		}
		return count;
	}
}
void swapinrow(float* arr1, float* arr2, int num) {
	float temp = 0;
	for (int i = 0; i < num; ++i) {
		temp = arr2[i];
		arr2[i] = arr1[i];
		arr1[i] = temp;
	}
}
float** swap(float**mat,int row,int col,int*count_row) {
	int temp = 0;
	for (int i = 0; i < row; i++)
	{
		for (int j = (i+1); j < row; ++j) {
			if (count_row[j] < count_row[i]) {
				swapinrow(mat[i], mat[j], row);
				temp = count_row[i];
				count_row[i] = count_row[j];
				count_row[j] = temp;
			}
		}
	}
	return mat;
}
float** Gauss_elimination_matrix(float** mat, int row, int col)
{
	int i, j, k;
	float n = 0.0;
	int m = 0;
	float** result = allocate_mat(row, col);
	int* count_zeros = (int*)calloc(row, sizeof(int));
	count_zeros = countZero(mat, row, col, 1);
	mat = swap(mat, row, col, count_zeros);
	count_zeros = countZero(mat, row, col, 1);
	/*gauss!!!*/
	for (i = 0; i < row; i++) {
		//eliminate
		for (k = (i + 1); k < row; k++) {
			m = count_zeros[i];
			n = (mat[k][m] / mat[i][m]);
			for (j = 0; j < col; j++) {
				mat[k][j] = mat[k][j] - n * mat[i][j];
			}
		}
		mat = swap(mat, row, col, countZero(mat, row, col, 1));
		count_zeros = countZero(mat, row, col, 1);
	}
	copy_mat(result, mat, row, col);
	return result;
}
float** Jordan_elimination_matrix(float** mat, int row, int col)
{
	int i, j;
	float n = 0.0;
	int p = 0, k = 0, m = 0, q = 0;
	float** result = allocate_mat(row, col);
	int* count_zeros = (int*)calloc(row, sizeof(int));
	//do jordan:
	mat = swap(mat, row, col, countZero(mat, row, col, 1));
	count_zeros = countZero(mat, row, col, 1);//echelon form
	for (int i = 0; i < row; i++)
	{
		n = mat[i][i];
		if (n != 0) {
			for (int j = 0; j < col; j++)
			{
				mat[i][j] /= n;
			}
		}
	}// => main diagonal line have all '1' element
	for (i = 0; i < row; i++) {
		p = 0;
		for (k = i + 1; k < row; k++) {
			m = count_zeros[i] + p;
			n = mat[i][m + 1];
			for (j = m + 1; j < col; j++) {
				mat[i][j] = mat[i][j] - n * mat[k][j];
			}
			++p;
		}
	}
	copy_mat(result, mat, row, col);
	return result;
}

//det
float power(int x, int p) {
	//x power p
	int ans = 1;
	for (int i = 1; i <= p; ++i) {
		ans *= x;
	}
	return ans;
}
void get_sub_det(float** mat, float** temp, int row, int col, int size) {
	int a = 0, b = 0;
	for (int i = 0; i < size; ++i) {
		for (int j = 0; j < size; ++j) {
			if (i != row && j != col) {
				temp[a][b++] = mat[i][j];
				if (b == (size - 1)) {
					b = 0;
					a++;
				}
			}
		}
	}
}
float det(float** mat, int size) {
	int new_size = size - 1;
	int i, j, k;
	float ans = 0;
	if (size == 1) {
		ans= mat[0][0];
		return ans;
	}
	if (size == 2) {
		ans= (mat[0][0] * mat[1][1] - mat[0][1] * mat[1][0]);
		return ans;
	}
	float** temp = allocate_mat(size,size);
	if (size > 2) {
		for (k = 0; k < size; ++k) {
			get_sub_det(mat, temp, 0, k, size);
			ans += (float)(power(-1, (k + 2)) * mat[0][k] * det(temp, (size - 1)));
		}
	}
	dealloc(temp, new_size);
	return ans;
}
float Determinant_matrix(float** mat,int size, int row, int col)
{

	float ans = 0;
	float** temp = allocate_mat(size - 1, size - 1);
	if (row != 0 && col != 0) {
		get_sub_det(mat, temp, row - 1, col - 1, size);
		ans = det(temp, size - 1);
	}
	else if (row == 0 && col == 0) {
		return (double)det(mat, size);
	}
	return (double)ans;
}//determinant when del jth row and kth col

 //inverse
float** inverse_matrix(float** mat, int size)
{
	float** result = allocate_mat(size, size);
	double k = (1 / Determinant_matrix(mat, size, 0, 0));
	for (int i = 0; i < size; ++i) {
		for (int j = 0; j < size; ++j) {
			result[j][i] = (double)(k * power(-1, i + j) * Determinant_matrix(mat, size, i + 1, j + 1));
		}
	}
	return result;
}

//random mat
void create_random_mat() {
	float** mat;
	int row, col, min, max, ans;
	float min1, max1;
	printf_s("\n>>Create random matrix:\nEnter size of matrix:");
	printf_s("\nnumber of row:  "); scanf_s("%d", &row);
	printf_s("number of col:  "); scanf_s("%d", &col);
	mat = allocate_mat(row, col);
	printf_s("\nint(1) matrix or float(2) matrix: "); scanf_s("%d", &ans);
	switch (ans)
	{
	case 1: 
		printf_s("\nYou choose [int] matrix\nEnter the value range:\nMIN: "); scanf_s("%d", &min);
		printf_s("MAX: "); scanf_s("%d", &max);
		mat = random_int_mat(row, col, min, max); break;
	case 2:
		printf_s("\nYou choose [float] matrix\nEnter the value range:\nMIN: "); scanf_s("%f", &min1);
		printf_s(" MAX: "); scanf_s("%f", &max1);
		mat = random_float_mat(row, col, min1, max1); break;
	default: break;
	}
	printf_s("\nYour random matrix is: \n");
	print_mat(mat, row, col);
	dealloc(mat, row, col);
}
//=====> BETA haven't done yet
//find eigen values
void eigen_values()
{
	printf_s("nothing here!");
}
//find eigen vector
void eigen_vectors()
{
	printf_s("nothing here!");
}
/*=======================================================================*/
//functions to input manually
void addition()
{
		int row1, col1, row2,col2;
		int i, j, k;
		float tmp = 0.0;
		//input
	input:
		system("cls");
		printf_s("addition\n");
		printf_s("Enter size the matrix:\n");
		printf_s("Number of rows & columns in matrix1:\n"); scanf_s("%d %d", &row1,&col1);
		printf_s("Number of rows & columns in matrix2:\n"); scanf_s("%d %d", &row2,&col2);
		if (row1 != row2 || col1 != col2) {
			printf_s("error!!");
			printf_s("enter again.");
			goto input;
		}
		fflush(stdin);
		//
		float** mat1 = allocate_mat(row1, col1);
		float** mat2 = allocate_mat(row2, col2);
		float** result = allocate_mat(row1, col1);
		//
		printf_s("matrix1:\n");
		mat1=scan_mat(mat1, row1, col1);
		printf_s("matrix2:\n");
		mat2=scan_mat(mat2, row2, col2);
		//
		fflush(stdin);
		//process
		result = ADD_matrix(mat1, mat2, row1, col1);
		//output
		system("cls");
		printf_s("Solution:\n");
		print_mat(result, row1, col1);
		dealloc(mat1, row1); dealloc(mat2, row2);
		dealloc(result, row1);
}

void subtraction()
{
	int row1, col1, row2, col2;
	int i, j, k;
	float tmp = 0.0;
	//input
input:
	system("cls");
	printf_s("subtraction\n");
	printf_s("Enter size the matrix:\n");
	printf_s("Number of rows & columns in matrix1:\n"); scanf_s("%d %d", &row1, &col1);
	printf_s("Number of rows & columns in matrix2:\n"); scanf_s("%d %d", &row2, &col2);
	if (row1 != row2 || col1 != col2) {
		printf_s("error!!");
		printf_s("enter again.");
		goto input;
	}
	fflush(stdin);
	//
	float** mat1 = allocate_mat(row1, col1);
	float** mat2 = allocate_mat(row2, col2);
	float** result = allocate_mat(row1, col1);
	//
	printf_s("matrix1:\n");
	mat1 = scan_mat(mat1, row1, col1);
	printf_s("matrix2:\n");
	mat2 = scan_mat(mat2, row2, col2);;
	//
	fflush(stdin);
	//process
	result = SUBTRACT_matrix(mat1, mat2, row1, col1);
	//output
	system("cls");
	printf_s("Solution:\n");
	print_mat(result, row1, col1);
	dealloc(mat1, row1); dealloc(mat2, row2);
	dealloc(result, row1);
}

void multiplication()
{
	int row1, col1, row2, col2;
	int i, j, k;
	float tmp = 0.0;
	//input
input:
	system("cls");
	printf_s("multiplication\n");
	printf_s("Enter size the matrix:\n");
	printf_s("Number of rows & columns in matrix1:\n"); scanf_s("%d %d", &row1, &col1);
	printf_s("Number of rows & columns in matrix2:\n"); scanf_s("%d %d", &row2, &col2);
	if (col1!=row2) {
		printf_s("error!!");
		printf_s("enter again.");
		goto input;
	}
	fflush(stdin);
	//
	float** mat1 = allocate_mat(row1, col1);
	float** mat2 = allocate_mat(row2, col2);
	float** result = allocate_mat(row1, col2);
	//
	printf_s("\nEnter matrices: \n");
	printf_s(">>Matrix1:\n");
	mat1 = scan_mat(mat1, row1, col1);
	printf_s(">>Matrix2:\n");
	mat2 = scan_mat(mat2, row2, col2);

	fflush(stdin);

	//process
	result = MUL_matrix(mat1, mat2, row1, col2);
	//output
	system("cls");
	printf_s("Solution:\n");
	print_mat(result, row1, col2);
	dealloc(mat1, row1); dealloc(mat2, row2);
	dealloc(result, row1);
}

void gauss_elimination()
{   //	
	float** mat;
	int i, j;
	int col, row;
	
//input
	printf_s("Gauss elimination\nenter size the matrix:\n");
	printf_s("number of rows:    "); scanf_s("%d", &row);
	printf_s("number of columns: "); scanf_s("%d", &col);
	mat = allocate_mat(row, col);
	int* count_zeros = (int*)calloc(row, sizeof(int));
	float** result = allocate_mat(row, col);
	float** result_ = allocate_mat(row, col);
	//system("cls"); 
	fflush(stdin);
	printf_s("enter the matrix's elements:\n");
	mat = scan_mat(mat, row, col);
	system("cls");
	printf_s("\nInput matrix: \n");
	print_mat(mat, row, col);
//process
	result = Gauss_elimination_matrix(mat, row, col);
	//after gauss
	result_ = Jordan_elimination_matrix(mat, row, col);
	//number of dimension;
	int dim = row;
	count_zeros = countZero(mat, row, col, 1);
	for (int i = 0; i < row; ++i) {
		if (count_zeros[i] == col) {
			--dim;
		}
	}
//output
	printf_s("\nAnswer:\ndim(mat)= %d\nResult[%d][%d]:\n>>Gauss:\n",dim, row, col);
	print_mat(result, row, col);
	printf_s("\n\n>>Gauss-Jordan:\n"); 
	print_mat(result_, row, col);
	dealloc(mat, row); dealloc(result_, row); dealloc(result, row);
}

void determinant()
{
	float** mat;
	float result = 0;
	int size;
	//input
	printf_s("\nDeterminant\nPlease enter the matrix:\n");
	printf_s("***\nEnter size(nxn):    "); scanf_s("%d", &size);
	//
	mat = allocate_mat(size,size);
	//==========================
	fflush(stdin);
	printf_s("***\nEnter the matrix's elements:\n");
	mat = scan_mat(mat, size, size);
	system("cls");
	printf_s("\nInput matrix:\n");
	print_mat(mat, size, size);
	//==========================
	result = Determinant_matrix(mat, size, 0, 0);
	printf_s("\***\nDeterminant of matrix is: ");
	printf_s("%-4.1f", result);
	dealloc(mat, size);
}

void inverse_mat()
{
	float** mat;
	float** result;
	int size;
	//==========================
	//input
	input:
	printf_s("\nInverse matrix\nPlease enter the matrix:\n");
	printf_s("***\nEnter size(nxn):    "); scanf_s("%d", &size);
	//
	mat = allocate_mat(size, size);
	result = allocate_mat(size, size);
	//
	fflush(stdin);
	printf_s("***\nEnter the matrix's elements:\n");
	mat = scan_mat(mat, size, size);
	system("cls");
	printf_s("\nInput matrix:\n");
	print_mat(mat, size, size);
	//==========================
	//condition
	if (Determinant_matrix(mat, size, 0, 0) == 0) {
		printf_s("The matrix can not be inverted, please check again!!!\nPress any keys to continue....");
		_getch();
		goto input;
	}
	//process
	result = inverse_matrix(mat, size);
	//==========================
	//print out
	printf_s("\n***\nThe inverse matrix of it is: \n");
	print_mat(result, size, size);
	dealloc(result, size);
	dealloc(mat, size);
}
/*=======================================================================*/
//read from file
//get the mat_numberth matrix 

int* f_get_size(const char* filename, const char mat_num) {
	FILE* fp = fopen(filename, "r+");
	unsigned int ch;
	int* size = (int*)calloc(2, sizeof(int));
	rewind(fp);
	ch = fgetc(fp);
	while (ch != EOF) {
		if (ch == '#') {
			ch = fgetc(fp);
			if (ch == mat_num) {
				ch = fgetc(fp);
				fscanf(fp, "%d %c %d", &size[0], &ch, &size[1]);
			}
		}
		ch = fgetc(fp);
	}
	fclose(fp);
	return size;
}
int f_get_row(int* size) {
	int row;
	row = size[0];
	return row;
}
int f_get_col(int*size) {
	int col;
	col = size[1];
	return col;
}

void get_matrix(float** mat, const char mat_number, int row, int col,const char* filename)
{
	FILE* fp = fopen(filename, "r+");
	unsigned int ch;
	char* tmp = (char*)malloc(50 * sizeof(char));
	rewind(fp);
	ch = fgetc(fp);
	while (ch != EOF) {
		if (ch == '#') {
			ch = fgetc(fp);
			if (ch == mat_number) {
				fgets(tmp, 50, fp);//to the next row
				for (int i = 0; i < row; ++i) {
					for (int j = 0; j < col; ++j) {
						if (!fscanf(fp, "%f ", &mat[i][j])) {
							break;
						}
					}
				}
			}
		}
		ch = fgetc(fp);
	}
	fclose(fp);
}

void print_to_file(float** result, int row, int col)
{
	FILE* res;
	res = fopen("Result.txt", "a+");
	fprintf(res, "\nRESULT\n   MATRIX[%d][%d]:\n", row, col);
	for (int i = 0; i < row; ++i) {
		for (int j = 0; j < col; ++j) {
			char* buf = (char*)malloc(500 * sizeof(char));
			sprintf(buf, "%7.2f", (double)result[i][j]);
			fputs(buf, res);
			free(buf);
		}
		fputc('\n', res);
	}
	
	fclose(res);
}

void f_addition()
{
	char x;
	int  row1, col1;
	int  row2, col2;
	FILE* tmp = fopen("matrix.txt", "r+");
input:

	printf_s("\nEnter number of 1st matrix you want to count: "); scanf_s("%c%*c", &x);
	row1 = f_get_row(f_get_size("matrix.txt", x));
	col1 = f_get_col(f_get_size("matrix.txt", x));
	float** mat1 = allocate_mat(row1, col1);
	get_matrix(mat1, x, row1, col1, "matrix.txt");
	printf_s("\nEnter number of 2nd matrix you want to count: "); scanf_s("%c%*c", &x);
	row2 = f_get_row(f_get_size("matrix.txt", x));
	col2 = f_get_col(f_get_size("matrix.txt", x));
	float** mat2 = allocate_mat(row2, col2);
	get_matrix(mat2, x, row2, col2, "matrix.txt");
	if (row1 != row2 || col1 != col2) {
		printf_s("Your choosen mat is not satisfied the conditions\nPlease choose again....\n");
		goto input;
	}
	float** result = allocate_mat(row1, col1);
	result=ADD_matrix(mat1, mat2, row1, col1);
	//output
	system("cls");
	printf_s("Solution:\n");
	print_mat(result, row1, col1);
	print_to_file(result, row1, col1);
	dealloc(mat1, row1); dealloc(mat2, row2);
	dealloc(result, row1);
	fclose(tmp);
}

void f_subtraction()
{
	char x;
	int  row1, col1;
	int  row2, col2;
	FILE* tmp = fopen("matrix.txt", "r+");
input:

	printf_s("\nEnter number of 1st matrix you want to count: "); scanf_s("%c%*c", &x);
	row1 = f_get_row(f_get_size("matrix.txt", x));
	col1 = f_get_col(f_get_size("matrix.txt", x));
	float** mat1 = allocate_mat(row1, col1);
	get_matrix(mat1, x, row1, col1, "matrix.txt");
	printf_s("\nEnter number of 2nd matrix you want to count: "); scanf_s("%c%*c", &x);
	row2 = f_get_row(f_get_size("matrix.txt", x));
	col2 = f_get_col(f_get_size("matrix.txt", x));
	float** mat2 = allocate_mat(row2, col2);
	get_matrix(mat2, x, row2, col2, "matrix.txt");
	if (row1 != row2 || col1 != col2) {
		printf_s("Your choosen mat is not satisfied the conditions\nPlease choose again....\n");
		goto input;
	}
	float** result = allocate_mat(row1, col1);
	result = SUBTRACT_matrix(mat1, mat2, row1, col1);
	//output
	system("cls");
	printf_s("Solution:\n");
	print_mat(result, row1, col1);
	print_to_file(result, row1, col1);
	dealloc(mat1, row1); dealloc(mat2, row2);
	dealloc(result, row1);
	fclose(tmp);
}

void f_multiplication()
{
	char x;
	int  row1, col1;
	int  row2, col2;
	FILE* tmp = fopen("matrix.txt", "r+");
input:

	printf_s("\nEnter number of 1st matrix you want to count: "); scanf_s("%c%*c", &x);
	row1 = f_get_row(f_get_size("matrix.txt", x));
	col1 = f_get_col(f_get_size("matrix.txt", x));
	float** mat1 = allocate_mat(row1, col1);
	get_matrix(mat1, x, row1, col1, "matrix.txt");
	printf_s("\nEnter number of 2nd matrix you want to count: "); scanf_s("%c%*c", &x);
	row2 = f_get_row(f_get_size("matrix.txt", x));
	col2 = f_get_col(f_get_size("matrix.txt", x));
	float** mat2 = allocate_mat(row2, col2);
	get_matrix(mat2, x, row2, col2, "matrix.txt");
	
	if (row2 != col1) {
		printf_s("Your choosen mat is not satisfied the conditions\nPlease choose again....\n");
		goto input;
	}
	
	float** result = allocate_mat(row1, col2);
	//process
	result = MUL_matrix(mat1, mat2, row1, col2);
	//output
	system("cls");
	printf_s("Solution:\n");
	print_mat(result, row1, col2);
	print_to_file(result, row1, col2);
	dealloc(mat1, row1); dealloc(mat2, row2);
	dealloc(result, row1);
	fclose(tmp);
}

void f_gauss_elimination()
{
	char x;
	int  row, col;
	FILE* tmp = fopen("matrix.txt", "r+");
input:

	printf_s("\nEnter number of  matrix you want to count: "); scanf_s("%c%*c", &x);
	row = f_get_row(f_get_size("matrix.txt", x));
	col = f_get_col(f_get_size("matrix.txt", x));
	float** mat = allocate_mat(row, col);
	get_matrix(mat, x, row, col, "matrix.txt");
	int* count_zeros = (int*)calloc(row, sizeof(int));
	float** result = allocate_mat(row, col);
	float** result_ = allocate_mat(row, col);
	//system("cls"); 
	//process
	result = Gauss_elimination_matrix(mat, row, col);
	//after gauss
	result_ = Jordan_elimination_matrix(mat, row, col);
	//number of dimension;
	int dim = row;
	count_zeros = countZero(mat, row, col, 1);
	for (int i = 0; i < row; ++i) {
		if (count_zeros[i] == col) {
			--dim;
		}
	}
	//output
	printf_s("\nAnswer:\ndim(mat)= %d\nResult[%d][%d]:\n>>Gauss:\n", dim, row, col);
	print_mat(result, row, col);
	print_to_file(result, row, col);
	printf_s("\n\n>>Gauss-Jordan:\n");
	print_mat(result_, row, col);
	print_to_file(result_, row, col);
	dealloc(mat, row); dealloc(result_, row); dealloc(result, row);
	fclose(tmp);
}

void f_determinant()
{
	char x;
	int  row, col;
	FILE* tmp = fopen("matrix.txt", "r+");
input:

	printf_s("\nEnter number of matrix you want to count: "); scanf_s("%c%*c", &x);
	row = f_get_row(f_get_size("matrix.txt", x));
	col = f_get_col(f_get_size("matrix.txt", x));

	if (row != col) {
		printf_s("Your choosen mat is not satisfied the conditions\nPlease choose again....\n");
		goto input;
	}
	int size = row;
	float** mat = allocate_mat(size, size);
	float result;
	//==========================
	fflush(stdin);
	system("cls");
	get_matrix(mat, x, row, col, "matrix.txt");
	printf_s("\nInput matrix:\n");
	print_mat(mat, size, size);
	//==========================
	result = Determinant_matrix(mat, size, 0, 0);
	printf_s("\***\nDeterminant of matrix is: ");
	printf_s("%-4.1f", result);
	dealloc(mat, size);
	fclose(tmp);
}

void f_inverse_mat()
{

	char x;
	int  row, col;
	FILE* tmp = fopen("matrix.txt", "r+");
	//input
input:
	printf_s("\nEnter number of 1st matrix you want to count: "); scanf_s("%c", &x);
	row = f_get_row(f_get_size("matrix.txt", x));
	col = f_get_col(f_get_size("matrix.txt", x));
	if (row != col) {
		printf_s("Your choosen mat is not satisfied the conditions\nPlease choose again....\n");
		goto input;
	}
	int size = row;
	//
	float** mat = allocate_mat(size, size);
	float** result = allocate_mat(size, size);
	//
	fflush(stdin);
	get_matrix(mat, x, row, col, "matrix.txt");
	system("cls");
	printf_s("\nInput matrix:\n");
	print_mat(mat, size, size);
	//==========================
	//condition
	if (Determinant_matrix(mat, size, 0, 0) == 0) {
		printf_s("The matrix can not be inverted, please check again!!!\nPress any keys to continue....");
		_getch();
		goto input;
	}
	//process
	result = inverse_matrix(mat, size);
	//==========================
	//print out
	printf_s("\n***\nThe inverse matrix of it is: \n");
	print_mat(result, size, size);
	print_to_file(result, row, col);
	dealloc(result, size);
	dealloc(mat, size);
	fclose(tmp);
}

void f_eigen_values()
{
	printf_s("nothing here!");
}

void f_eigen_vectors()
{
	printf_s("nothing here!");
}
