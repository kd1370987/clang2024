#include <stdio.h>
main()
{
	char w;
	printf("文字を入力 : ");
	scanf("%c", &w);
	if (w > 0x41 && w < 0x5A || w>0x61 && w < 0x7A) {
		if (w > 0x61 && w < 0x7A) {
			printf("変換すると%c\n", w- 0x20);
		}
		else {
			printf("変換すると%c\n", w + 0x20);
		}
	}
	else {
		printf("エラー\n");
	}
}