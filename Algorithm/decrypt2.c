#include<stdio.h>
main() {
	char s[20];
	int i, k[20];

	printf("���������͂��Ă�������>");
	scanf("%s", &s);

	for (i = 0; s[i] != '\0'; i++) {
		printf("s[%d]�̕������L�[>",i);
		scanf("%d", &k[i]);
		s[i] = s[i] - k[i];
	}
	printf("�����ςݕ�����́A%s", s);
}