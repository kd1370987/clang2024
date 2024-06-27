#include<stdio.h>
main() {
	for (int i = 1; i <= 60; i++) { 
		printf("%2d ", i);
		if (i % 20 == 0) {
			printf("\n");
		}
	}
}