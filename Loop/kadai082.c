#include<stdio.h>
main() {
	int g = 0,i = 0, a = 0;
	while (1) {
		printf("整数（－９９９で終了）？");
		scanf("%d", &a);

		if (a == -999) { break; }
		if (a < 0) { continue; }
		g += a;
		i++;

	}
	printf("合計 = %d\n", g);
	printf("平均 = %.3f\n", (float)g / (float)i);
}