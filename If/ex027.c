#include <stdio.h>
main()
{
	char w;
	printf("��������� : ");
	scanf("%c", &w);
	if (w > 0x41 && w < 0x5A || w>0x61 && w < 0x7A) {
		if (w > 0x61 && w < 0x7A) {
			printf("�ϊ������%c\n", w- 0x20);
		}
		else {
			printf("�ϊ������%c\n", w + 0x20);
		}
	}
	else {
		printf("�G���[\n");
	}
}