#include <stdio.h>
main()
{
	char e;
	printf("���Z�q������ : ");
	scanf("%c", &e);
	switch (e) {
		case 0x2B:printf("���Z�ł�\n");
			break;
		case 0x2D:printf("���Z�ł�\n");
			break;
		case 0x2A:printf("��Z�ł�\n");
			break;
		case 0x2F:printf("���Z�ł�\n");
			break;
		case 0x25:printf("���܂�ł�\n");
			break;
		default: printf("���̑��ł�\n");
	}
}