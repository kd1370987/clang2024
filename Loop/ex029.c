#include <stdio.h>
main()
{
	int i,su;
	printf("数をいれて");
	scanf("%d", &su);
	i = 0;
	while (i<su) {
		printf("*");
		i++;
	}
}