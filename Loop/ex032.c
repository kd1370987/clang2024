#include <stdio.h>
main()
{
	int d, i;
	printf("�������� : ");
	scanf("%d", &d);
	for (i = 1; i <= 5; i++) {
		printf("%d ", d * i);
	}
}