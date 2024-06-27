#include<stdio.h>
main() {
	int i = 19;
	do {
		printf("%2d ", i+1);
		if (i % 10 == 0) {
			printf("\n");
		}
	} while (i-- > 0);
}