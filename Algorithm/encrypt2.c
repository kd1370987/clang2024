#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main() {
	char s[20];
	int i, k[20];

	printf("文字列を入力してください>");
	scanf("%s", &s);
	
	srand(time(0));
	
	for (i = 0; s[i] != '\0'; i++) {
		rand();
		k[i] = rand() % 6;
		s[i] = s[i] + k[i];
	}

	printf("暗号化文字列は、%s\n", s);
	printf("暗号化キーは、");
	for (int j = 0; j < i; j++) {
		printf("%d", k[j]);
	}
	printf("\n");
}