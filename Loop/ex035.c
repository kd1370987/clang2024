#include <stdio.h>
main()
{
	int g, n;
	g = 0;
	while (1) {
		printf("数をいれて : ");
		scanf("%d", &n);
		if (n == -999) {
			break;
		}
		g = g + n;
	}
	printf("合計 = %d", g);
}