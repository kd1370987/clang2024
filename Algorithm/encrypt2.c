#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main() {
	char s[20];
	int i, k[20];

	printf("���������͂��Ă�������>");
	scanf("%s", &s);
	
	srand(time(0));
	
	for (i = 0; s[i] != '\0'; i++) {
		rand();
		k[i] = rand() % 6;
		s[i] = s[i] + k[i];
	}

	printf("�Í���������́A%s\n", s);
	printf("�Í����L�[�́A");
	for (int j = 0; j < i; j++) {
		printf("%d", k[j]);
	}
	printf("\n");
}