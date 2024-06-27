#include<stdio.h>
main() {
	int d;
	printf("整数？");
	scanf("%d", &d);
	if (d == 0) {
		printf("入力値は「ゼロ」です");
	}
	if (d < 0) {
		printf("入力値は「マイナス」です");
	}
	if (d > 0) {
		printf("入力値は「プラス」です");
	}
}