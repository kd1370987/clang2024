#include <stdio.h>
main()
{
	int d1, d2, d3, sum;
	float ave;
	printf("�������R���� : ");
	scanf("%d%d%d", &d1, &d2, &d3);
	sum = d1 + d2 + d3;
	printf("���v=%d", sum);
	ave = sum / 3;
	printf("����=%.2f\n", ave);

}