#include <stdio.h>
main()
{
	char w;
	printf("文字を入力 : ");
	scanf("%c", &w);
	if (w >= 0x41 && w <= 0x5A) {
		printf("大文字です");
	}
	else {
		printf("その他の文字です");
	}
}