#include <stdio.h>
main()
{
	int d, i, a;
	printf("数をいれて");
	scanf("%d", &d);
	i = 0;
	while (i <= 10) {
		a = 0;
		a = d + i;
		printf("%d + %d = %d\n", d, i, a);
		i = i + 1;

	}
}