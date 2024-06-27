#include<stdio.h>
struct syouhinD {
	char name[20];
	int tanka;
};

int main(void) {
	struct syouhinD syouhin;
	struct syouhinD* p;
	p = &syouhin;
	printf("¤•i–¼=");
	scanf("%s", p->name);
	p->tanka = 30;
	printf("p->name = %s\n", p->name);
	printf("p->name = %d\n", p->tanka);
	printf("syouhin.name = %s\n", syouhin.name);
	printf("syouhin.tanka = %d\n", syouhin.tanka);
	return;
}