#include <stdio.h>
main() {
	int a[10];
	int c[10];
	printf("�z��a����z��c�ɃR�s�[\n�z�� a = ");
	for (int i = 0; i < 10; i++) {
		a[i] = (i + 1) * 10;
		printf("%4d", a[i]);
	}
	printf("\n�z�� c = ");
	for (int i = 0; i < 10; i++) {
		c[i] = a[i] * 2;
		printf("%4d", c[i]);
	}
}