#include<stdio.h>
main() {
	int i=0, a,g=0;
	do {
		printf("����(�[�X�X�X�ŏI��)?");
		scanf("%d", &a);
		g += a;
		i++;
	} while (a != -999);
	g = g + 999;
	printf("���v = %d\n", g);
	printf("���� = %f\n", (float)g / ((float)i-1));
}