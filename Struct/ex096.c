#include<stdio.h>
struct syouhindata {
	char name[20];
	int tanka;
};

void display3(struct syouhindata* p);

main() {
	int a = 10;
	struct syouhindata syouhin = { "Á‚µƒSƒ€" ,50 };
	display3(&syouhin);
}

void display3(struct syouhindata* p) {
	printf("%s  %d", p->name, p->tanka);
}