#include <stdio.h>
main()
{
	int su,i;
	printf("���������");
	scanf("%d", &su);
	i = su;
	while (i > 0) {
		printf("*");
		i = i - 1;
	}
}