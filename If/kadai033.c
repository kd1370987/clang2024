#include<stdio.h>
main() {
	char a;
	printf("アルファべット? ");
	scanf("%c", &a);
	printf("%c", a);
	if (a >= 0x61 && a <= 0x7A) {
		printf("その文字は「小文字」です\n");
	}
	else {
		printf("その文字は「大文字」です\n");
	}
	
}