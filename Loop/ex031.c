#include <stdio.h>
main()
{
	int d, i;
	d = 0;
	for (i = 1; i <= 10; i++) {
		d = d + i;
		printf("1����%d�܂ł̘a = %d\n", i, d);
	}
}