#include <stdio.h>
main()
{
	int n, i, j;
	printf("”‚ÍH");
	scanf("%d", &n);
	j = 1;
	do {
		i = 1;
		do {
			printf("*");
			i++;
		} while (i < j + 1);
		printf("\n");
		j++;
	} while (j <= n);
}