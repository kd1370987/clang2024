#include<stdio.h>
main() {
	char a;
	printf("�A���t�@�׃b�g? ");
	scanf("%c", &a);
	if (a >= 0x61 && a <= 0x7A) {
		printf("���̕����́u�������v�ł�\n");
	}
	else if (a >= 'A' && a <= 'Z') {
		printf("���̕����́u�啶���v�ł�\n");
	}
	else {
		printf("ERROR\n");
	}
	
}