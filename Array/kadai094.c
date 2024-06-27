#include<stdio.h>
main() {
	int a[10];
	int b[10];
	int w;

	for (int i = 0; i < 10; i++) {
		a[i] = 100 * (i + 1);
		b[i] = 10 * (i + 1);
	}
	for (int i = 0; i < 10; i++) {
		w = a[i];
		a[i] = b[i];
		b[i] = w;
	}
	printf("”z—ñ a = ");
		for (int i = 0; i < 10; i++) {
			printf("%d ",a[i]);
	}
	printf("\n”z—ñ b = ");
	for (int i = 0; i < 10; i++) {
		printf("%d ", b[i]);
	}
}