#include <stdio.h>
main()
{
	int g, n;
	g = 0;
	while (1) {
		printf("��������� : ");
		scanf("%d", &n);
		if (n == -999) {
			break;
		}
		g = g + n;
	}
	printf("���v = %d", g);
}