#include<stdio.h>
main() {
	char a;
	printf("一文字入力？");
	scanf("%c", &a);
	if (a >= 'a' && a <= 'z' || a >= 'A' && a <= 'Z') {
		if (a >= 'a' && a <= 'z') {
			printf("変換結果は%c", a - 0x20);
		}
		else {
			printf("変換結果は%c", a + 0x20);
		}
	}
	else {
		printf("%c", a);
	}
}