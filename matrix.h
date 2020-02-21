#pragma once
#ifndef matrix
#define matrix

#ifdef __cplusplus
extern "C" {
#endif
	typedef struct MATRIX {
		float** mat;
		char* mat_num;
	}MAT;

	//some supporting functions
	float** allocate_mat(int row, int col);
	void dealloc(float** mat, int row);
	void print_mat(float** mat, int row, int col);
	float** scan_mat(float** mat, int row, int col);
	void copy_mat(float** mat1, float** mat2, int row, int col);
	// core
	float** ADD_matrix(float** mat1, float** mat2, int row, int col);
	float** SUBTRACT_matrix(float** mat1, float** mat2, int row, int col);
	float** MUL_matrix(float** mat1, float** mat2, int row, int col);
	float** Jordan_elimination_matrix(float** mat, int row, int col);
	float** Gauss_elimination_matrix(float** mat, int row, int col);
	float Determinant_matrix(float** mat, int size, int row, int col);
	float** inverse_matrix(float** mat, int size);
	// manually
	void addition();
	void subtraction();
	void multiplication();
	void gauss_elimination();
	void determinant();
	void inverse_mat();
	//
	void eigen_values();
	void eigen_vectors();
	void create_random_mat();
	//read from files
	void get_matrix(float** mat, const char mat_number, int row, int col, const char* filename);
	//test
	int* f_get_size(const char* filename, const char mat_num);
	int f_get_row(int* size);
	int f_get_col(int* size);
	
	void print_to_file(float** result, int row, int col);
	void f_addition();
	void f_subtraction();
	void f_multiplication();
	void f_gauss_elimination();
	void f_determinant();
	void f_inverse_mat();
	void f_eigen_values();
	void f_eigen_vectors();
#ifdef __cplusplus
}
#endif 

#endif // !matrix
