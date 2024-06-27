#include<stdio.h>
main() {
	int g = 0,i = 0, a = 0;
	while (1) {
		printf("®”i|‚X‚X‚X‚ÅI—¹jH");
		scanf("%d", &a);

		if (a == -999) { break; }
		g += a;
		i++;
	}
	printf("‡Œv = %d\n", g);
	printf("•½‹Ï = %.3f\n", (float)g / (float)i);
}