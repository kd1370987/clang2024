#include <stdio.h>
main()
{
	int e, d1, d2;
	printf("���Z�q����� : ");
	scanf("%d", &e);
	printf("�Q�̐�������� : ");
	scanf("%d%d", &d1, &d2);
	if (e != 1) {
		if (e != 2) {
			if (e != 3) {
				if (e != 4) {
					printf("�G���[\n");
				}
				else {
					printf("%d\n", d1 / d2);
				}
			}
			else {
				printf("%d\n", d1 * d2);
			}
		}
		else {
			printf("%d\n", d1 - d2);
		}
	}
	else {
		printf("%d\n", d1 + d2);
	}
}