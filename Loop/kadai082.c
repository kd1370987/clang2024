#include<stdio.h>
main() {
	int g = 0,i = 0, a = 0;
	while (1) {
		printf("�����i�|�X�X�X�ŏI���j�H");
		scanf("%d", &a);

		if (a == -999) { break; }
		if (a < 0) { continue; }
		g += a;
		i++;

	}
	printf("���v = %d\n", g);
	printf("���� = %.3f\n", (float)g / (float)i);
}