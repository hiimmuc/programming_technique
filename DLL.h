//all for 1st element
struct selem;
typedef struct selem elem, * pelem, * dll;
struct selem {
	pelem prev;
	int data;
	pelem next;
};
//init
dll init();
//add func
dll add(dll l, int data);
//eliminate func
dll eli(dll l);
//seek
