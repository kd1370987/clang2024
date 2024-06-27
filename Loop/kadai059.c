#include<stdio.h>
main() {
	int i, a,j;
	printf("   ");
	for (i = 0; i < 9; i++) {
		printf(" %2d", i+1);
	}
	printf("\n");
	for (i = 0; i < 30; i++) { printf("="); }
	printf("\n");
	for (i = 1; i <= 9; i++) {
		printf("%d |", i);
		for (j = 1; j <= 9; j++) {
			printf(" %2d", i * j);
		}
		printf("\n");
	}

}