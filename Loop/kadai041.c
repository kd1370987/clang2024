#include<stdio.h>
main() {
	int a=0,g=0,i=0;
	while (a != -999) {
		g += a;
		i += 1;
		printf("����(-999�ŏI��)�H");
		scanf("%d", &a);
	}
	printf("���v = %d\n", g);
	printf("���� = %.2f\n", (float)g / ((float)i-1));
}