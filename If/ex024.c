#include <stdio.h>
main()
{
	char w;
	printf("��������� : ");
	scanf("%c", &w);
	if (w >= 0x41 && w <= 0x5A) {
		printf("�啶���ł�");
	}
	else {
		printf("���̑��̕����ł�");
	}
}