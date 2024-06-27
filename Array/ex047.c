#include <stdio.h>
main() {
	float g, x[3][2];
	int i, j;
	for (i = 0; i < 3; i++) {
		g = 0;
		for (j = 0; j < 2; j++) {
			printf("x[%d][%d] = ", i, j);
			scanf("%f", &x[i][j]);
			g = g + x[i][j];
		}
		printf("\n%ds–Ú‚Ì•½‹Ï = %0.2f\n\n",i, g / 2);
	}
}