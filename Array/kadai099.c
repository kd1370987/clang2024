#include<stdio.h>
main() {
	char a;
	int b;

	printf("回数、文字列 ");
	scanf("%d%s", &b, &a);
	for (int i = 0; i < b; i++) {
		printf("%s ", &a);
	}
}