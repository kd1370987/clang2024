#include<stdio.h>
main() {
	int a = 100, b = 200,c;
	int *pa, *pb;
	printf("���s�O : a = %d		b = %d\n", a, b);
	pa = &a;
	pb = &b;

	c = *pa;
	a = *pb;
	b = c;

	printf("���s�� : a = %d		b = %d\n",a,b);
}