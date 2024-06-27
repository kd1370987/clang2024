#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main() {
	int d, i;
	srand(time(0));
	for (i = 1; i <= 100; i++) {
		rand();
		d = rand() % 300 + 1;
		printf("%3d ", d);
		if (i % 10 == 0) {
			printf("\n");
		}
	}
}