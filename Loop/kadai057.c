#include<stdio.h>
main() {
	char a;
	int b=0;
	printf("アルファベット小文字？");
	scanf("%c", &a);
	for (int i = (a-0x20); i+b <= 0x5A; b++) {
		printf("%c ", (a-0x20)+b);
	}

}