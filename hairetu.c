#include <stdio.h>
main()
{
					//配列の初期化
	int i, data[5], b[3] = { 30,60,90 };
	for (i = 0; i < 5; i++) {
		printf("配列data[%d] = ", i);
		scanf("%d", &data[i]);
	}
	for (i = 0; i < 5; i++) {
		printf("data[%d]=%d\n", i, data[i]);
	}
	for (i = 0; i < 3; i++) {
		printf("b[%d]=%d\n", i, b[i]);
	}
}