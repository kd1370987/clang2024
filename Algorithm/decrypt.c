#include<stdio.h>
main() {
	char s[100];
	int i;

	printf("�Í������������͂��Ă�������>");
	scanf("%s", &s);

	for (i = 0; s[i] != '\0'; i++) {
		s[i] = s[i] - 0x1;
	}
	printf("�����ςݕ������,%s", s);

}