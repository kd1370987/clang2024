#include<stdio.h>
main() {
	int h,a, b;
	a = 5;
	b = 3;
	printf("a=%d,b=%d\n", a, b);
	h = a;
	a = b;
	b = h;
	printf("a=%d,b=%d\n", a, b);

}