#include <stdio.h>
main()
{
	int i, d;
	printf("���́H");
	scanf("%d", &d);
	do {
		i = 1;
		do {
			printf("*");
			i++;
		} while (i <= 5);
		printf("\n\n");
		d--;
	} while (d > 0);
}