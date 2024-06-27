#include <stdio.h>
main() {
	int a[2][2][3], i, j, k, g;
	g = 0;
	for (i = 0; i < 2; i++) {
		printf("アパート%d\n", (i+1));
		for (j = 0; j < 2; j++) {
			printf("(%d階) : ", (j + 1));
			for (k = 0; k < 3; k++) {
				scanf("%d", &a[i][j][k]);
				g = g + a[i][j][k];
			}
		}
		printf("\n");
	}
	printf("全体で%d人住んでいます", g);
}