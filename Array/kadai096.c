#include<stdio.h>
main() {
	int c[10];
	int i,w;

	for (i = 0; i < 10; i++) {
		printf("®” ");
		scanf("%d", &w);
		if (w == -999) { break; }
		c[i] = w;
		
	}
	printf("”z—ñ c = ");
	for (int j = 0; j < i; j++) {
		printf("%d ", c[j]);
	}
	printf("\n");
}