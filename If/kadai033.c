#include<stdio.h>
main() {
	char a;
	printf("�A���t�@�׃b�g? ");
	scanf("%c", &a);
	printf("%c", a);
	if (a >= 0x61 && a <= 0x7A) {
		printf("���̕����́u�������v�ł�\n");
	}
	else {
		printf("���̕����́u�啶���v�ł�\n");
	}
	
}