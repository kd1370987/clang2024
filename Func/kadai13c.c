#include<stdio.h>
void kan(int *a,int *b);

main() {
	int a, b;
	a = 10;
	b = 20;
	printf("関数実行前の値\na = %d\tb = %d\n", a, b);
	kan(&a, &b);
	printf("関数実行後の値\na = %d\tb = %d\n", a, b);
}

void kan(int *a, int *b) {
	int w;
	w = *a;
	*a = *b;
	*b = w;
	return;
}