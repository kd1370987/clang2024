#include <stdio.h>
main()
{
	int su,i;
	printf("数をいれて");
	scanf("%d", &su);
	i = su;
	while (i > 0) {
		printf("*");
		i = i - 1;
	}
}