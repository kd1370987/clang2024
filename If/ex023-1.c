#include <stdio.h>
main()
{
	int ss, h, m, s;

	printf("秒数を入力 : ");
	scanf("%d", &ss);

	if (ss >= 0) {
		if (ss <= 5000) {
			h = ss / 3600;
			s = ss % 3600;
			m = s / 60;
			s = s % 60;
			printf("%d時間%d分%d秒です\n", h, m, s);
		}
		else {
			printf("５０００秒以内にしてください\n");
		}
	}
	else {
		printf("マイナスはエラーです\n");
	}
}