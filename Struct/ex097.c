#include<stdio.h>
#define Dend -1

struct ken
{
	int code;
	char name[20];
	struct ken* next;
};

main() {
	struct ken kendata[] = { {1,"�k�C��",NULL},{2,"�X��",NULL},{3,"��茧",NULL},{4,"�{�錧",NULL},{5,"�H�c��",NULL},{6,"�R�`��",NULL},{7,"������",NULL} ,{ Dend,"",NULL } };
	struct ken* p, * wp;

	p = wp = kendata;
	do {
		p++;
		wp->next = p;
		wp = p;
	} while (p->code != Dend);

	for (p = kendata; p->code != Dend; p = p->next) {
		printf("code = %d name = %s\n", p->code, p->name);
	}
}