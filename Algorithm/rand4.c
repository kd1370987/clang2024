#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main()
{
	int h;
	srand(time(0));
	rand();
	h = rand() % 5 + 1;
	for (h; h > 0; h--) {
		printf("™");
	}
	printf("\n");
}