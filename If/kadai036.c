#include<stdio.h>
main()
{
	int d1, d2;
	printf("����1�H");
	scanf("%d", &d1);
	printf("����2�H");
	scanf("%d", &d2);
	if (d1 != d2) {
		if (d1 > d2) {
			printf("%d�̂ق���%d���%d�傫��", d1, d2, d1 - d2);
		}
		else {
			printf("%d�̂ق���%d���%d������", d1, d2, d2 - d1);
		}
	}
	else {
		printf("%d��%d�͓�����", d1, d2);
	}
}