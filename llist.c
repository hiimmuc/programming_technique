#include "llist.h"
#include <stdlib.h>


LLIST llInit() {
	return NULL;
}


LLIST llInsertHead(LLIST l, int data) {
	PELEM e = (PELEM)malloc(sizeof(ELEM));
	e->data = data;
	e->next = l;
	return l = (LLIST)e;
}



LLIST llInsertTail(LLIST l, int data) {
	PELEM p;

	PELEM e = (PELEM)malloc(sizeof(ELEM));
	e->data = data;
	e->next = NULL;

	if (!l) return (LLIST)e;

	for (p=l; p->next; p = p->next) ;
	p->next = e;
	return l;
}


LLIST llInsertAfter(LLIST l, PELEM a, int data) {
	PELEM e;
	if (!a) return l;

	e = (PELEM)malloc(sizeof(ELEM));
	e->data = data;
	e->next = a->next;
	a->next = e;
	return l;
}



LLIST llDeleteHead(LLIST l) {
	PELEM p;
	if (!l) return NULL;

	p = l->next;
	free(l);
	return (LLIST)p;
}


LLIST llDeleteTail(LLIST l) {
	PELEM p;

	if (!l) return NULL;
	if (!l->next) {
		free(l);
		return NULL;
	}

	for (p = l; p->next->next; p = p->next) ;
	free(p->next);
	p->next = NULL;
	return l;
}


LLIST llDeleteAfter(LLIST l, PELEM a) {
	PELEM p;
	if (!a || !a->next) return l;

	p = a->next;
	a->next = p->next;

	free(p);
	return l;
}


PELEM llSeek(LLIST l, int i) {
	for (; i>0 && l; i--)
		l = l->next;
	return (PELEM)l;
}


void llForEach(LLIST l, LLCALLBACK func, void* user) {
	for (; l; l=l->next)
		func(l->data, user);
}


int llLength(LLIST l) {
	int c;
	for (c=0; l; c++)
		l = l->next;
	return c;
}


LLIST llDeleteAll(LLIST l) {
	PELEM p;
	for (; l; l=p) {
		p = l->next;
		free(l);
	}
	return NULL;
}
