#include <stdio.h>
main()
{
	int ye;
	printf("西暦を入力 : ");
	scanf("%d", &ye);
	if (1989 <= ye) {
		printf("平成生まれです\n");
	}
	else {
		printf("昭和生まれです\n");
	}
}