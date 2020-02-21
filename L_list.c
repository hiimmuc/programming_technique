//#include<stdio.h>
//#include<stdlib.h>
//#include"L_list.h"
//
//LLIST llInit() {
//	return NULL;
//}
//
////Insert element to head of a list
//LLIST llInsertHead(LLIST l, int data) {
//	PELEM e = (PELEM)malloc(sizeof(ELEM));
//	e->data = data;
//	e->next = l;
//	return (LLIST)e;
//}
////? like replace more than insert
//
////Insert element to tail of a list
//LLIST llInsertTail(LLIST l, int data) {
//	PELEM p;
//
//	PELEM e = (PELEM)malloc(sizeof(ELEM));
//	e->data = data;
//	e->next = NULL;
//	if (l == NULL) {
//		return (LLIST)e;
//	}
//	for (p = l; p->next; p = p->next) {
//		p->next = e;
//	}
//	return l;
//}
//
////Insert element after another in a list
//LLIST llnsertAfter(LLIST l, PELEM a, int data) {
//	PELEM e;
//	if (!a) return l;
//	e = (PELEM)malloc(sizeof(ELEM));
//	e->data = data;
//	e->next = a->next;
//	a->next = e;
//	return l;
//}
////Delete first element
//LLIST llDeleteHead(LLIST l){
//	PELEM p;
//	if (!l) { 
//		return NULL; 
//	}
//	p = l->next;
//	free(l);
//	return (LLIST)p;
//}
////Delete last element
//LLIST llDeleteTail(LLIST l) {
//	PELEM p;
//
//	if (!l) {
//		return NULL;
//	}
//	if (!l->next) {
//		free(l);
//		return NULL;
//	}
//
//	for (p = 1; p->next->next; p = p->next) {
//		free(p->next);
//		p->next = NULL;
//	}
//	return l;
//}
////Delete element after another in a list
//LLIST llDeleteAfter(LLIST l, PELEM a) {
//	PELEM p;
//	if (!a || !a->next) {
//		return l;
//	}
//	p = a->next;
//	a->next = p->next;
//	free(p);
//	return l;
//}
////Delete all elements
//LLIST llDeleteAll(LLIST l) {
//	PELEM p;
//	for (; l; l = p) {
//		p = l->next;
//		free(l);
//	}
//	return NULL;
//}
////count number of elements
//int llLength(LLIST l) {
//	int c; for (c = 0; l; c++) {
//		l = l->next;
//	}
//	return c;
//}
////seek
//PELEM llSeek(LLIST l, int i) {
//	for (; i > 0 && l; i--) {
//		l = l->next;
//	}
//	return (PELEM)l;
//}
////for each :v
//void llForEach(LLIST l, LLCALLBACK func, void* user) {
//	for (; l; l = l->next) {
//		func(l->data, user);
//	}
//}
//
////for stack probs
//
////pop
//
//LLIST pop(LLIST l) {
//	int data;
//	PELEM p = l;
//	data = p->data;
//	llDeleteHead(l);
//	return data;
//}
//
////push
//
//LLIST push(LLIST l, int data) {
//	PELEM tmp;
//	pop(l);
//	tmp = llInsertHead(l, data);
//	return (LLIST)tmp;
//
//}
//
////for queue
//LLIST enqueue(LLIST l, int data) {
//	llInsertHead(l, data);
//}
//LLIST dequeue(LLIST l) {
//	llDeleteTail(l);
//}
//
////llconvert
//LLIST llconvert(int* arr, int count) {
//	PELEM parr;
//	/*LLIST l;
//	llInit(l);*/
//	int i=0;
//	parr = (PELEM)malloc((count+1) * sizeof(ELEM));
//	for (; parr->next; parr = parr->next) {
//		parr->data = arr[i];
//		++i;
//		if (i = count) {
//			parr->next = NULL;
//		}
//	}
//	return (LLIST)parr;
//}
//
//////reverse
////static void llreverse(struct Node** head_ref)
////{
////	struct LL* prev = NULL;
////	struct Node* current = *head_ref;
////	struct Node* next = NULL;
////	while (current != NULL) {
////		// Store next 
////		next = current->next;
////
////		// Reverse current node's pointer 
////		current->next = prev;
////
////		// Move pointers one position ahead. 
////		prev = current;
////		current = next;
////	}
////	*head_ref = prev;
////}