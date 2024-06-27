#include <stdio.h>
main()
{
	char e;
	printf("文字を入力 : ");
	scanf("%c", &e);
	if (e >= 0x41 && e <= 0x5A || e >= 0x61 && e <= 0x7A) {
		printf("アルファベットです\n");
	}
	else {
		if (e >= 0x30 && e <= 0x39) {
			printf("数字です\n");
		}
		else {
			printf("その他の文字です\n");
		}
		
	}
}