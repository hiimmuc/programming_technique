#ifndef __LLIST_H__
#define __LLIST_H__

#ifdef __cplusplus
extern "C" {
#endif


struct SELEM;
typedef struct SELEM ELEM, *PELEM, *LLIST;

struct SELEM {
	int data;
	PELEM next;
};

typedef void (*LLCALLBACK)(int,void*);


LLIST llInit();

LLIST llInsertHead(LLIST l, int data);
LLIST llInsertTail(LLIST l, int data);
LLIST llInsertAfter(LLIST l, PELEM a, int data);

LLIST llDeleteHead(LLIST l);
LLIST llDeleteTail(LLIST l);
LLIST llDeleteAfter(LLIST l, PELEM a);
LLIST llDeleteAll(LLIST l);

PELEM llSeek(LLIST l, int i);
void llForEach(LLIST l, LLCALLBACK func, void* user);
int llLength(LLIST l);



#ifdef __cplusplus
}
#endif


#endif