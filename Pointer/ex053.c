#include<stdio.h>
main() {
	int a = 100, b = 200, *c;
	int *pa, *pb;

	pa = &a;
	pb = &b;

	printf("実行前 : *pa = %d	*pb = %d\n", *pa, *pb);

	c = pa;
	pa = pb;
	pb = c;


	printf("実行後 : *pa = %d	*pb = %d\n", *pa, *pb);
}