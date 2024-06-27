#include <stdio.h>
main() {
	int a[10];
	int c[10];
	printf("配列aから配列cにコピー\n配列 a = ");
	for (int i = 0; i < 10; i++) {
		a[i] = (i + 1) * 10;
		printf("%4d", a[i]);
	}
	printf("\n配列 c = ");
	for (int i = 0; i < 10; i++) {
		c[i] = a[i] * 2;
		printf("%4d", c[i]);
	}
}