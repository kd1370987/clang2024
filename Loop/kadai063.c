#include<stdio.h>
main() {
	int i=0;
	while (i++ < 20) {
		printf("%2d ", i);
		if (i % 10==0) {
			printf("\n");
		}
	}
}