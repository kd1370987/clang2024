#include<stdio.h>
main() {
	int a[10];
	int b[10];
	int w;
	int g = 0;
	int i;

	for (int i = 0; i < 10; i++) {
		a[i] = 100 * (i + 1);
		b[i] = 10 * (i + 1);
	}
	for (int i = 0; i < 10; i++) {
		w = a[i];
		a[i] = b[i];
		b[i] = w;
	}
	printf("�z�� a = ");
		for (i = 0; i < 10; i++) {
			printf("%d ",a[i]);
			g += a[i];
	}
		printf("\n���v = %d\t���� = %d", g, g / i);
		g = 0;
	printf("\n�z�� b = ");
	for (i = 0; i < 10; i++) {
		printf("%d ", b[i]);
		g += b[i];
	}
	printf("\n���v = %d\t���� = %d", g, g / i);
}