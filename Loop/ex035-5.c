#include <stdio.h>
main()
{
	int i, j, n;
	printf("���́H");
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		for (j = 0; j < n-i; j++) {
			printf(" ");
		}
		for (j = 1; j < i + 1; j++) {
			printf("*");
		}
		printf("\n");
	}
}