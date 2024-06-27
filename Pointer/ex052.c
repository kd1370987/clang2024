#include<stdio.h>
main() {
	int a = 100, b = 200,c;
	int *pa, *pb;
	printf("é¿çsëO : a = %d		b = %d\n", a, b);
	pa = &a;
	pb = &b;

	c = *pa;
	a = *pb;
	b = c;

	printf("é¿çså„ : a = %d		b = %d\n",a,b);
}