#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include"DLL.h"

dll init(){
	return NULL;
}

//add
dll add(dll l, int data) {
	pelem tmp = (pelem)malloc(sizeof(elem));
	tmp->prev = NULL;
	tmp->data = data;
	tmp->next = l;
	return (dll)tmp;
}
//del
dll eli(dll l) {
	pelem tmp;
	if (!l) {
		return NULL;
	}
	tmp = l->next;
	free(l);
	return (dll)tmp;
}

