#include<stdio.h>
main() {
	int i,a;

	a = 32;
	for (i = 0; i <= 126 - 32; i++) {
		printf("%x %c ", a + i, a + i);
		if ((i+1) % 10 == 0) {
			printf("\n");
		}
	}
}