#include <stdio.h>
main()
{
	int mo,m;
	printf("������� : ");
	scanf("%d", &mo);
	m = mo % 2;
	if (mo != 2) {
		if (mo <= 7 && m == 1 || mo > 7 && m == 0) {
			printf("�ŏI����31���ł�\n");
		}
		else {
			printf("�ŏI����30���ł�\n");
		}
	}
	else {
		printf("�ŏI����28���ł�\n");
	}
}