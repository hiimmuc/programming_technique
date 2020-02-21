//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//#include<conio.h>
//#include<ctype.h>


////lib_part2

//#include "shape.h"
//
//void main() {
//	int ans;
//	int height, width, length;
//	printf_s("1.triangle\n2.rectangular\n3.square\n");
//	scanf_s("%d", &ans);
//	switch (ans)
//	{
//	case 1: {
//		scanf_s("%d%d", &height, &length);
//		printf_s("%0.1f", triangle_area(height, length));
//		break;
//	}
//	case 2: {
//		scanf_s("%d%d", &height, &width);
//		printf_s("%d", rec_area(height, width));
//		break;
//	}
//	case 3: {
//		scanf_s("%d", &length);
//		printf_s("%d", squr_area(length));
//		break;
//	}
//	default:
//		break;
//	}
//	_getch();
//
//}

//file_problems

//4fun 
//file* test;
//void main() {
//	char name[] = "phuong nam";
//	int x, y;
//
//	test=fopen("1.txt", "r+");
//
//	if (test == null) {
//		perror("can not open file: ");
//	}
//	fflush(test);
//
//	fprintf(test,"%s","start\nhello my friends\n sample table:\n");
//	fprintf(test, "%s\t%10d\t%d,%d", name, 912582757, 1, 1);
//	fflush(test);
//
//	fscanf(test, "%d,%d", &x,&y);
//	printf_s("cip is:\t %d,%d",x,y);
//
//	fclose(test);
//	_getch();
//}

//ex1

//FILE* ex1;
//
//void main() {
//	int ch;
//	char* arr=(char*)malloc(500*sizeof(char));
//	ex1 = fopen("ex.txt", "r+");
//	fgets(arr, 500, ex1);
//	fclose(ex1);
//	ex1 = fopen("ex.txt", "w+");
//	int i = 0;
//	while ((ch=arr[i])!='\0') {
//		if (ch >= 'a' && ch <= 'z') {
//			ch = ch - 32;
//		}
//			putc(ch, ex1);
//			++i;
//	}
//	fclose(ex1);
//}
// 

////source code
//int main() {
//
//	//file nane
//	const char* filename = "ex.txt";
//	//file pointers
//	file* fp, * fp1;
//	//to store read character
//	int ch;
//
//	//open file in read mode
//	fp = fopen(filename, "r");
//	if (fp == null) {
//		printf("error in opening file.\n");
//		return -1;
//	}
//	//create extest file
//	fp1 = fopen("extest.txt", "w");
//	if (fp1 == null) {
//		printf("error in creating extest file.\n");
//		return -1;
//	}
//	//read file from one file and copy
//	//into another in uppercase
//	while ((ch = fgetc(fp)) != eof) {
//		if (islower(ch)) {
//			ch = ch - 32;
//		}
//		//write character into extest file
//		putc(ch, fp1);
//	}
//	fclose(fp);
//	fclose(fp1);
//	//rename extest file to ex.txt
//	rename("extest.txt", "ex.txt");
//	//remove extest file
//	remove("extest.txt");
//
//	//now, print content of the file
//	//open file in read mode
//	fp = fopen(filename, "r");
//	if (fp == null) {
//		printf("error in opening file.\n");
//		return -1;
//	}
//	printf("content of file\n");
//	while ((ch = getc(fp)) != eof) {
//		printf("%c", ch);
//	}
//	printf("\n");
//	fclose(fp);
//	_getch();
//	return 0;
//}

