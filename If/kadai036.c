#include<stdio.h>
main()
{
	int d1, d2;
	printf("整数1？");
	scanf("%d", &d1);
	printf("整数2？");
	scanf("%d", &d2);
	if (d1 != d2) {
		if (d1 > d2) {
			printf("%dのほうが%dより%d大きい", d1, d2, d1 - d2);
		}
		else {
			printf("%dのほうが%dより%d小さい", d1, d2, d2 - d1);
		}
	}
	else {
		printf("%dと%dは等しい", d1, d2);
	}
}