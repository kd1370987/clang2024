#include <stdio.h>
main() {
	int i,j,g,a[][3] = { {10,20,30},{1,2,3} };
	
	for (i = 0; i < 2; i++) {
		g = 0;
		for (j = 0; j < 3; j++) {
			printf("a[%d][%d] = %d\n", i, j, a[i][j]);
			g = g + a[i][j];
		}
		printf("%d行目の合計 = %d\n", i, g);
	}

}