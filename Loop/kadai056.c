#include<stdio.h>
main() {
	char a;
	int b=0;
	printf("アルファベット小文字？");
	scanf("%c", &a);
	for (int i = a; i+b <= 0x7A; b++) {
		printf("%c ", a+b);
	}

}