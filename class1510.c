//#include<stdio.h>
//#include<math.h>
//#include<string.h>
//#include<stdlib.h>
//
//#include"str_.h"
//#define _CRT_SECURE_NO_WARNINGS
//function&library

//PROBLEMS

//ex1
//done

//void count_number_of_element() {
//	int* arr; arr = (int*)malloc(sizeof(int));
//	int count=0;
//	int val=1;
//	int i=0;
//	while (i < val) {
//		scanf_s("%d", (arr + i));
//		if (*(arr+i)== 0) {
//			break;
//		}
//		else {
//			count++;
//			val++;
//			arr = (int*)realloc(arr, val * sizeof(int));
//		}
//		i++;
//	}
//	for (i = 0; i < count; i++) {
//		printf_s("%d\t", *(arr + i));
//	}
//	printf_s("\nnummber of elements: %d", count);
//}
//void main() {
//	count_number_of_element();
//	_getch();
//}

//ex2
//done

//int check_primes(int n){
//	int i;
//	for (i = 2; i < n; i++) {
//		if (n % i != 0) {
//			continue;
//		}
//		else {
//			return 1;
//		}
//	}
//	if (n == 2) {
//		return 0;
//	}
//	return 0;
//}
//
//int print_primes(int num) {
//	int *prime;
//	prime = (int*)calloc(1, sizeof(int));
//	int i, count = 0;
//	for (i = 2; i < num; i++) {
//		if (check_primes(i) == 0) {
//			count++;
//			prime = (int*)realloc(prime, count * sizeof(int));
//			prime[count-1] = i;
//		}
//	}
//	for (i = 0; i < count; i++) {
//		printf_s("[%d] ", prime[i]);
//		if (i == 10) {
//			printf_s("\n");
//		}
//	}
//	
//}
//
//void main() {
//	int num;
//
//	printf_s("enter the number: \n");
//	if (scanf_s("%d", &num) >= 0) {
//		printf_s("the array of prime numbers : \n ");
//		print_primes(num);
//	}
//	
//	_getch();
//}

//ex3
//done
/*Define an array of struct MenuItem { title, task function }, print
a menu to screen, read user’s choice then execute the corresponding task*/
/*IDEA: create a menuitem's struct include name (apple...) number of elements and price//
then read those elements from the seller and put menu to screen include name and num. of ele.//
then read the customer choice//
then count total money customer have to pay//
then print items, number of that item they choose and total money*/

//typedef struct {
//	char name[20];
//	int num_of_elements;
//	int price;
//}menuitem;
//
//void init_(char name_item[20],int num,int money) {
//	printf_s("\nEnter the name of item:      "); fflush(stdin);
//	gets_s(name_item,20);
//	printf_s("enter the number of that item: "); scanf_s("%d%*c", num);
//	printf_s("enter the price of that item:  "); scanf_s("%d%*c", money);
//}
//void select(char ans[], int sl) {
//	printf_s("please choose one item in the list above: "); fflush(stdin);
//	gets_s(ans,20);
//	printf_s("enter the number u want:                  "); scanf_s("%d%*c", sl);
//}
//
//void main() {
//	int num, i;
//	char selection[3][20], item_[20];
//	int money;
//	int ans;
//	menuitem item[3];
//	//input the menu
//	for (i = 0; i < 3; i++) {
//		init_(item[i].name, &item[i].num_of_elements, &item[i].price);
//	}
//	//put menu to screen
//	for (i = 0; i < 3; i++) {
//		printf_s("\nitem %d is ", i + 1);
//		puts(item[i].name);
//		printf_s("quantity: %d\n", item[i].num_of_elements);
//	}
//	//choose item and print total money of those
////choose:
//	i = 0;
//
//	select(selection[i], &num);
//
//	/*printf_s("do u want to choose the other item(y/n)");
//	if (getchar() == 'y') {
//		++i;
//		fflush(stdin);
//		goto choose;
//	}*/
//	system("cls");
//
//	for (i = 0; i < 3; i++) {
//		for (int j = 0; j < 3; j++) {
//			if (strcmp(selection[j], item[i].name) == 0) {
//				money = num * item[i].price;
//				strcpy_s(item_,20, item[i].name);
//			}
//		}
//	}
//	
//	printf_s("\n u choose: "); puts(item_);
//	printf_s("total of money: %d",money);
//
//	_getch();
//}

//ex4
//done

//int fin_series(int n) {
//	if (n == 0) {
//		return 0;
//	}
//	else if (n == 1) {
//		return 1;
//	}
//	else if (n >= 2) {
//		return fin_series(n - 1) + fin_series(n - 2);
//	}
//}
//
//void main() {
//	int num;
//	int result;
//	printf_s("enter the number: ");
//	if (scanf_s("%d", &num) >= 0) {
//		printf("the %dth elements of finbonancci series is: %d", num, fin_series(num));
//	}
//	_getch();
//}

//ex5
//

//void main() {
//	char str_test1[10], str_test2[10];
//	int i=0;
//	init_string(str_test1);
//	init_string(str_test2);
//	
//	char ch;
//	ch = getchar();
//	if (!compare_string(str_test1, str_test2)) {
//		printf_s("\nnot matches");
//	}
//	copy_string(str_test1,str_test2);
//	if (!search_string(str_test1, ch)) {
//		printf_s("\nnot matches");
//	}
//
//	_getch();
//}

//ex6
//



//test

//void swap(int *a, int *b) {
//	int *c=0;
//	c = a;
//	a = b;
//	b = c;
//}
//
//void main() {
//	int num1, num2;
//	swap((int*) scanf_s("%d", &num1),(int*) scanf_s("%d", &num2));
//	printf("number1 is: %d\nnumber2 is: %d", num1, num2);
//	_getch();
//}

//void changeto10(int* a,int so) {
//	int* z;
//	z = (int*)calloc(so, sizeof(int));
//	z = a;
//	for (; so >= 0; so--) {
//		*(z++) = 10;
//	}
//}
//void main() {
//	int i, arr[5];
//	for (i = 0; i < 5; i++) {
//		scanf_s("%d", &arr[i]);
//	}
//	changeto10(arr, 5);
//	for (i = 0; i < 5; i++) {
//		printf_s("%d\t", arr[i]);
//	}
//	_getch();
//}
//
//int *change_array(int n) {
//	int* arr;
//	int count = 0;
//	count = n / 2;
//	arr = (int*)calloc(count, sizeof(int));
//	for (int i = 1; i<= (n/2); i++) {
//		arr[i] = i*2;
//	}
//	return arr;
//}
//
//void main() {
//	int num;
//	int* tmp = 0;
//	if (scanf_s("%d", &num) != 0) {
//		tmp = change_array(num);
//		for (int i = 0; i <= num/2; i++) {
//			printf_s("%d  ", tmp[i]);
//		}
//	}
//	free(tmp);
//	_getch();
//}

