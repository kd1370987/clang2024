#include <stdio.h>
main()
{
	int e, d1, d2;
	printf("演算子を入力 : ");
	scanf("%d", &e);
	printf("２つの整数を入力 : ");
	scanf("%d%d", &d1, &d2);
	if (e != 1) {
		if (e != 2) {
			if (e != 3) {
				if (e != 4) {
					printf("エラー\n");
				}
				else {
					printf("%d\n", d1 / d2);
				}
			}
			else {
				printf("%d\n", d1 * d2);
			}
		}
		else {
			printf("%d\n", d1 - d2);
		}
	}
	else {
		printf("%d\n", d1 + d2);
	}
}