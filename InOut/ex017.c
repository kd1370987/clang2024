#include <stdio.h>
main()
{
	float d1, d2, d3, sum;
	printf("１つ目の実数 : ");
	scanf("%f", &d1);
	printf("2つ目の実数 : ");
	scanf("%f", &d2);
	printf("3つ目の実数 : ");
	scanf("%f", &d3);
	sum = d1 + d2 + d3;
	printf("合計=%.2f",sum);
	printf("平均=%.2f", sum / 3);
}