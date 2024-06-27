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
	printf("配列 a = ");
		for (i = 0; i < 10; i++) {
			printf("%d ",a[i]);
			g += a[i];
	}
		printf("\n合計 = %d\t平均 = %d", g, g / i);
		g = 0;
	printf("\n配列 b = ");
	for (i = 0; i < 10; i++) {
		printf("%d ", b[i]);
		g += b[i];
	}
	printf("\n合計 = %d\t平均 = %d", g, g / i);
}