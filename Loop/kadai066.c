#include<stdio.h>
main() {
	int i=0,g=0;
	do {
		i++;
		g += i;
		printf("%d+", i);
	} while (g <= 300);
	printf("\b=%d\n", g);
}