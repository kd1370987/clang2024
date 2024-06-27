#include<stdio.h>
main() {
	int a = 0;
	char b;
	while (a != -1) {
		printf("文字コード(ー１で入力終了)?");
		scanf("%d", &a);
		b = a;
		printf("%c\n", b);
	}


}
