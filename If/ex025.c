#include <stdio.h>
main()
{
	char e;
	printf("��������� : ");
	scanf("%c", &e);
	if (e >= 0x41 && e <= 0x5A || e >= 0x61 && e <= 0x7A) {
		printf("�A���t�@�x�b�g�ł�\n");
	}
	else {
		if (e >= 0x30 && e <= 0x39) {
			printf("�����ł�\n");
		}
		else {
			printf("���̑��̕����ł�\n");
		}
		
	}
}