#include<stdio.h>
#include<string.h>
struct syouhindata {
	char name[20];
	int tanka;
};

main() {
	struct syouhindata syouhin1, syouhin2;
	strcpy(syouhin1.name, "���M");
	syouhin1.tanka = 30;
	syouhin2 = syouhin1;
	printf("syouhin1.name = %s\n", syouhin1.name);
	printf("syouhin1.name = %d\n", syouhin1.tanka);
	printf("syouhin2.name = %s\n", syouhin2.name);
	printf("syouhin2.name = %d\n", syouhin2.tanka);
}