#include <stdio.h>
main()
{
	int n, i, j;
	printf("���́H");
	scanf("%d", &n);
	i = 0;
	do {
		j = 0;
		do {
			printf(" ");
			j++;
		} while (j < n - i);
		j = 0;
		do {
			printf("*");
			j++;
		} while (j < i + 1);
		printf("\n");
		i++;
	} while (i < n);
}