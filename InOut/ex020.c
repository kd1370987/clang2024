#include <stdio.h>
main()
{
	char w;
	printf("小文字を入力 : ");
	scanf("%c", &w);
	printf("大文字に変換して出力 : %c\n", w-0x20);
}