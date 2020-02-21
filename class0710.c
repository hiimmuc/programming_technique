//#include<stdlib.h>
//#include<stdio.h>
//#include<string.h>
//#include<conio.h>
//#define _CRT_SECURE_NO_WARNINGS_
//dynamic memory allocation
//allocate memory

//ex1

//void main() {
//	int N=2;
//	int *array;
//	int i,count=0;
//	/*printf_s("N= ");
//	scanf_s("%d", &N);*/
//	array = (int*)calloc(N ,sizeof(int));
//	for (i = 0; i < N; i++) {
//		scanf_s("%d", &array[i]);
//		if (array[i] == -1) {
//			break;
//		}
//
//	}
//	while(count<N){
//		scanf_s("%d", &array[count]);
//		if (array[count] == 0) {
//			break;
//		}
//		int temp = &array;
//		if (count == N - 1) {
//			N++;
//			temp = (int*) realloc(array,N*sizeof(int));
//			/*if (array=='\0') {
//				break;
//			}*/
//		}
//		count++;
//	}
//	for (i = N-1; i > 0; i--) {
//		printf_s("%d\t", array[i-1]);
//	}
//	free(array);
//	_getch();
//
//}
//test case
//int callcount() {
//	static int count = 0;
//	count++;
//	return count;
//}
//void main(int argc, char* argv[]) {
//	
//	int num, i=0;
//	while (i < 3) {
//		callcount;
//	}
//	num=callcount();
//	printf_s("%d", num);
//	_getch();
//}

//ex2

//void main() {
//	float* array;
//	int i=0, n=sizeof(int);
//	array = (int*)malloc(n*sizeof(int));
//	while(i<n) {
//		printf_s("array[%d]: ", i + 1); fflush(stdin);
//		scanf_s("%f", array + i);
//		if (*(array + i) !=0.0) {
//			if (i == n - 1) {
//				array = (int*)realloc(array, (n++) * sizeof(int));
//			}
//		}
//		else {
//			printf_s("stop!");
//			break;
//		}
//		i++;
//	}
//	for (i = 0; i < sizeof(array); i++) {
//		printf_s("\narray[%d]= %0.1f\n", i + 1, *(array+i));
//	}
//	_getch();
//}

//ex3

//void main() {
//	char str1[10], str2[10];
//	int i, size1 = 0, size2 = 0;
//
//	printf_s("\nstr1: "); fflush(stdin); gets(str1);
//	printf_s("\nstr2: "); fflush(stdin); gets(str2);
//	//count
//	for (i = 0; i < 10; i++) {
//		if (str1[i]) {
//			size1++;
//		}
//		else {
//			break;
//		}
//	}
//	for (i = 0; i < 10; i++) {
//		if (str2[i]) {
//			size2++;
//		}
//		else {
//			break;
//		}
//	}
//	//add
//	for (i = size1; i < size1 + size2; i++) {
//		str1[i] = str2[i - size1];
//	}
//	//out
//	for (i = 0; i < size1 + size2; i++) {
//		putchar(str1[i]);
//	}
//	_getch();
//
//
//}

//ex4

//void main() {
//	char str1[10];
//	char str2[10];
//	char ans;
//	int i, j,tmp=0;
//nhap:
//	printf_s("START...\n");
//	printf_s("str1: \n");
//	gets_s(str1, 10 * sizeof(char)); fflush(stdin);
//	printf_s("str2: \n"); 
//	gets_s(str2, 10 * sizeof(char)); fflush(stdin);
//	/*_strlwr(str1);
//	_strlwr(str2);*/
//	if ((int)strlen(str1) == (int)strlen(str2)) {
//		j = strlen(str1);
//		for (i = 0; i < j; i++) {
//
//			if ((int)str1[i] != (int)str2[i]) {
//				printf_s("not equal");
//				tmp++;
//				break;
//			}
//		}
//		if (tmp == 0) {
//			printf_s("two strings are equal");
//		}
//	}
//	else {
//		printf_s("nhap lai: ");
//		goto nhap;
//	}
//
//	/*printf_s("\nAgian(y/n): ");
//	ans=getchar(); fflush(stdin);
//	if (ans == 'y'||ans=='Y') {
//		goto nhap;
//	}*/
//	_getch();
//}

//ex5

//void main(){
//	char *str, *result;
//	int i, k = 0;
//	str = (char*)malloc(5);
//	result = (char*)malloc(5);
//	printf("str: "); fflush(stdin); gets(str);
//	str = (char*)realloc(str,strlen(str) * sizeof(char));
//	for (i = 0; i < (int)strlen(str); i++) {
//		if (str[i]&&str[i]!=' ') {
//			result[k] = str[i];
//			k++;
//		}
//	}
//	result = (char*)realloc(result, (k+1) * sizeof(char));
//	for (i = 0; i < sizeof(result); i++) {
//		if (result[i]) {
//			printf_s("'%c' ", result[i]);
//		}
//	}
//	free(str);
//	free(result);
//	_getch();
//}

//ex6

//void main() {
//	int N = 1;
//	float *ar1,*ar2;
//	int i,count=0;
//	/*printf_s("N= ");
//	scanf_s("%d", &N);*/
//	ar1 = (float*)calloc(N ,sizeof(float));
//	ar2 = (float*)calloc(N, sizeof(float));
//	
//	printf_s("enter 1st array:\n");
//	while(count<N){
//		scanf_s("%f*", &ar1[count]);
//		if (ar1[count] == 0) {
//			break;
//		}
//		if (count == N - 1) {
//			N++;
//			ar1 = (float*)realloc(ar1,N*sizeof(float));
//		}
//		count++;
//	}
//
//	printf_s("enter 2st array:\n");
//	int count2 = 0;
//	N = 1;
//	while (count2 < N) {
//		scanf_s("%f*", &ar2[count2]);
//		if (ar2[count2] == 0) {
//			break;
//		}
//		if (count2 == N - 1) {
//			N++;
//			ar2 = (float*)realloc(ar2, N * sizeof(float));
//		}
//		count2++;
//	}
//	
//	fflush(stdin);
//	float* result;
//	result = (float*)calloc((count + count2),sizeof(float));
//	int dem=0;
//	//copy array to result
//	for (i = 0; i <count; i++) {
//		if (ar1[i]==0) {
//			continue;
//		}
//		result[i] = ar1[i];
//		dem++;
//	}
//	for (i = count; i < count + count2; i++) {
//		if (ar2[i-count]==0) { 
//			continue;
//		}
//		result[i] = ar2[i-count];
//		dem++;
//	}
//	
//	printf_s("\nafter combine: \n");
//	for (i = 0; i < count + count2; i++) {
//		printf_s("%0.1f ", result[i]);
//	}
//
//	//sort
//	int j;
//	float tmp;
//	for (j = 0; j < dem; j++) {
//		
//		for (i = j+1; i < dem; i++) {
//			if (result[j] > result[i]) {
//				tmp = result[i];
//				result[i] = result[j];
//				result[j] = tmp;
//			}
//			else if (result[i] == result[j]) {
//				tmp = result[i];
//				result[i] = result[j+1];
//				result[j+1] = tmp;
//				j++;
//			}
//		}
//	}
//
//	//print
//	printf_s("\nRESULT[%d]:\n", count + count2);
//
//	for (j = 0; j < count + count2; j++) {
//		printf_s("%0.1f ", result[j]);
//	}
//
//	_getch();
//	free(ar1); free(ar2);
//}

//test

//void main() {
//	int count[20][3];
//	int i, j, k, m, p;
//	m = 0; p = 0;
//
//	for (i = 0; i <= 20; i++) {
//		for (j = 0; j < 10; j++) {
//			for (k = 0; k < 4; k++) {
//				if ((1*i + 2 * j + 5 * k) == 20) {
//					count[m][0] = i;
//					count[m][1] = j;
//					count[m][2] = k;
//					m++;
//				}
//				
//			}
//		}
//	}
//	//print
//	for (i = 0; i < 20; i++) {
//		
//		if (count[i][p] >= 0) {
//				printf("case [%d]: %d to 1000, %d to 2000, %d to 5000\n", p + 1, count[i][0], count[i][1], count[i][2]);
//				p++;
//		}
//		
//	}
//	_getch();
//}

//test 2

//void insert_elements(float* X, int count) {
//
//	X = (float*)realloc(X, count * sizeof(float));
//	int j;
//
//	for (j = 0; j < count; j++) {
//		fflush(stdin);
//		scanf_s("%f*", &X[j]);
//	}
//}
////int insert(float* X, int x) {
////	int count = 0;
////	x = 1;
////	X = (float*)malloc(x * sizeof(float));
////	while (count < x) {
////		scanf_s()
////	}
////}
//void main() {
//	int m, n; 
//	float* A, * B, * C, z = 0;
//	A = (float*)malloc(sizeof(float));
//
//	B = (float*)malloc(sizeof(float));
//	printf_s("so phan tu mang A: n= "); scanf_s("%d", &n);
//	printf_s("so phan tu mang B: m= "); scanf_s("%d", &m);
//	
//	printf_s("nhap mang A \n");
//	
//	insert_elements(A, n);
//	
//	printf_s("nhap mang B \n");
//	
//	insert_elements(B, m);
//
//	//	C = (float*)malloc((m + n) * sizeof(float));
//	printf_s("%0.1f\t", *A);
//	_getch();
//}

