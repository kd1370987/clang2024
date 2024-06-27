#include <stdio.h>
main()
{
	int i,j,d,a, b[5][5], c[5][5];
	d = 0;
	a = 1;
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			d = 3 * a;
			a++;
			b[i][j] = d;
			c[i][j] = b[i][j];
			printf("%3d", c[i][j]);
		}
		printf("\n");
	}

}