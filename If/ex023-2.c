#include <stdio.h>
main()
{
	int AD;
	printf("�������� : ");
	scanf("%d", &AD);
	if (0 == AD % 4) {
		if (0 == AD % 100) {
			if (0 == AD % 400) {
				printf("���邤�N�ł�\n");
			}
			else {
				printf("���邤�N�ł͂���܂���\n");
			}
		}
		else {
			printf("���邤�N�ł�\n");
		}
	}
	else {
		printf("���邤�N�ł͂���܂���\n");
	}

}