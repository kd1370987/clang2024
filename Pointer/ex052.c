#include<stdio.h>
main() {
	int a = 100, b = 200,c;
	int *pa, *pb;
	printf("実行前 : a = %d		b = %d\n", a, b);
	pa = &a;
	pb = &b;

	c = *pa;
	a = *pb;
	b = c;

	printf("実行後 : a = %d		b = %d\n",a,b);
}