#include <stdio.h>
main()
{
	int mo,m;
	printf("月を入力 : ");
	scanf("%d", &mo);
	m = mo % 2;
	if (mo != 2) {
		if (mo <= 7 && m == 1 || mo > 7 && m == 0) {
			printf("最終日は31日です\n");
		}
		else {
			printf("最終日は30日です\n");
		}
	}
	else {
		printf("最終日は28日です\n");
	}
}