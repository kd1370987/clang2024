#include <stdio.h>
main()
{
	int d, g, i, c;
	float h;
	g = 0;
	i = 0;
	c = 0;
		for (i=0; i >= 0; i++) {
			printf("���́H");
			scanf("%d", &d);
			if (d != -999) {
				g = g + d;
				c++;
			}
			else {
				i = -999;
			}
		}
	h = (float)g / c;
	printf("���v = %d     ���� = %.2f\n", g, h);
}