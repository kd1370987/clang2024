#include<stdio.h>
main() {
	int a = 100, b = 200, *c;
	int *pa, *pb;

	pa = &a;
	pb = &b;

	printf("���s�O : *pa = %d	*pb = %d\n", *pa, *pb);

	c = pa;
	pa = pb;
	pb = c;


	printf("���s�� : *pa = %d	*pb = %d\n", *pa, *pb);
}