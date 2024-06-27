#include<stdio.h>
main() {
	int i,j,d=1,a[5][5];
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			a[i][j] = d;
			d++;
			printf("%3d", a[i][j]);
		}
		printf("\n");
	}

}