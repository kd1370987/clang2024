#include <stdio.h>
main()
{
	float d1, d2, d3, sum;
	printf("�P�ڂ̎��� : ");
	scanf("%f", &d1);
	printf("2�ڂ̎��� : ");
	scanf("%f", &d2);
	printf("3�ڂ̎��� : ");
	scanf("%f", &d3);
	sum = d1 + d2 + d3;
	printf("���v=%.2f",sum);
	printf("����=%.2f", sum / 3);
}