#include <stdio.h>
main()
{
	int ss, m, h, s;
	printf("秒数を入力 : ");
	scanf("%d", &ss);
	if (ss <= 5000) {
		h = ss / 3600;
		s = ss % 3600;
		m = s / 60;
		s = s - (m * 60);
		printf("%d時間%d分%d秒\n", h, m, s);
	}
	else {
		printf("エラー\n");
	}
}