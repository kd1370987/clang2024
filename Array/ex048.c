#include <stdio.h>
main() {
	int a[2][2][3], i, j, k, g;
	g = 0;
	for (i = 0; i < 2; i++) {
		printf("�A�p�[�g%d\n", (i+1));
		for (j = 0; j < 2; j++) {
			printf("(%d�K) : ", (j + 1));
			for (k = 0; k < 3; k++) {
				scanf("%d", &a[i][j][k]);
				g = g + a[i][j][k];
			}
		}
		printf("\n");
	}
	printf("�S�̂�%d�l�Z��ł��܂�", g);
}