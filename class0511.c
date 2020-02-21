////data_structure
//#include<stdio.h>
//#include<conio.h>
//#include<stdlib.h>
//#include"L_list.h"
//#include"DLL.h"
//
////test
//
//void printlist(LLIST l) {
//	printf_s("%d elements: \n", llLength(l));
//	for (; l; l = l->next) {
//		printf_s("%5d\n", l->data);
//	}
//}
////void listsum(int data, void* user) {
////	int* ps = (int*)user;
////	*ps += data;
////}
//int main() {
//	LLIST l;
//	PELEM p;
//	int i, s;
//	l = llInit();
//	for (i = 0; i < 5; ++i) {
//		l = llInsertHead(l, i);
//		l = llInsertTail(l, -i);
//	}
//	printlist(l);
//	s = 0;
//	l = llDeleteAll(l);
//	printlist(l);
//	_getch();
//	return 0;
//}
//
////ex1
//
//void printl(dll l) {
//  puts("the list is: ");
//	for (; l;l= l->next) {
//		printf_s("%d\n", l->data);
//	}
//}
//void main() {
//	dll list;
//	int num;
//	int i;
//	list = init();
//	for (i = 1; i < 10; i++) {
//		list = add(list,2* i);
//	}
//	for (i = 5; i < 10; i++) {
//		list = eli(list);
//	}
//	printl(list);
//	_getch();
//}

//ex2 
//skip

//void printl(dll l) {
//	  puts("the list is: ");
//		for (; l;l= l->next) {
//			printf_s("%d\n", l->data);
//		}
//	}
//void main() {
//	int i;
//	dll list;
//	list = init();
//	int return_data;
//	for (i = 1; i < 10; i++) {
//				list = add(list,2* i);
//		}
//	return_data = pop(list);
//	printf_s("%d", return_data);
//	push(list, 20);
//	printl(list);
//	_getch();
//}

//ex3
//skip

//void main() {
//
//}

//ex4

//void main() {
//	int* arr;
//	int n;
//	printf_s("nhap so phan tu: \n"); scanf_s("%d", &n);
//	arr = (int*)malloc(n * sizeof(int));
//	for (int i = 0; i < n; i++) {
//		scanf_s("%d", arr + i);
//	}
//	printlist(llconvert(arr, n));
//	_getch();
// }

//ex5


//ex6


//ex7
//skip

//test source code
// C program for generic linked list 

///* A linked list node */
//struct Node
//{
//	// Any data type can be stored in this node 
//	void* data;
//
//	struct Node* next;
//};
//
///* Function to add a node at the beginning of Linked List.
//This function expects a pointer to the data to be added
//and size of the data type */
//void push1(struct Node** head_ref, void* new_data, size_t data_size)
//{
//	// Allocate memory for node 
//	struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
//
//	new_node->data = malloc(data_size);
//	new_node->next = (*head_ref);
//
//	// Copy contents of new_data to newly allocated memory. 
//	// Assumption: char takes 1 byte. 
//	int i;
//	for (i = 0; i < data_size; i++)
//		*(char*)(&new_node->data + i) = *(char*)(&new_data + i);
//
//	// Change head pointer as new node is added at the beginning 
//	(*head_ref) = new_node;
//}
//
///* Function to print nodes in a given linked list. fpitr is used
//to access the function to be used for printing current node data.
//Note that different data types need different specifier in printf() */
//void printList(struct Node* node, void (*fptr)(void*))
//{
//	while (node != NULL)
//	{
//		(*fptr)(node->data);
//		node = node->next;
//	}
//}
//
//// Function to print an integer 
//void printInt(void* n)
//{
//	printf(" %d", *(int*)n);
//}
//
//// Function to print a float 
//void printFloat(void* f)
//{
//	printf(" %f", *(float*)f);
//}
//
///* Driver program to test above function */
//int main()
//{
//	struct Node* start = NULL;
//
//	// Create and print an int linked list 
//	unsigned int_size = sizeof(int);
//	int arr[] = { 10, 20, 30, 40, 50 }, i;
//	for (i = 4; i >= 0; i--)
//		push1(&start, &arr[i], int_size);
//	printf("Created integer linked list is \n");
//	printList(start, printInt);
//
//	// Create and print a float linked list 
//	unsigned float_size = sizeof(float);
//	start = NULL;
//	float arr2[] = { 10.1, 20.2, 30.3, 40.4, 50.5 };
//	for (i = 4; i >= 0; i--)
//		push1(&start, &arr2[i], float_size);
//	printf("\n\nCreated float linked list is \n");
//	printList(start, printFloat);
//
//	return 0;
//}
