#include<stdio.h>
main() {
	char a;
	printf("�ꕶ�����́H");
	scanf("%c", &a);
	if (a >= 'a' && a <= 'z' || a >= 'A' && a <= 'Z') {
		if (a >= 'a' && a <= 'z') {
			printf("�ϊ����ʂ�%c", a - 0x20);
		}
		else {
			printf("�ϊ����ʂ�%c", a + 0x20);
		}
	}
	else {
		printf("%c", a);
	}
}