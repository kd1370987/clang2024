#include<stdio.h>
void kan(int *a,int *b);

main() {
	int a, b;
	a = 10;
	b = 20;
	printf("�֐����s�O�̒l\na = %d\tb = %d\n", a, b);
	kan(&a, &b);
	printf("�֐����s��̒l\na = %d\tb = %d\n", a, b);
}

void kan(int *a, int *b) {
	int w;
	w = *a;
	*a = *b;
	*b = w;
	return;
}