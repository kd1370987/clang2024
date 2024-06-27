#include<stdio.h>
main()
{
	int d[] = { 10,20,30,40,50,60,70,80,-999 };
	int* pd;
	int i;
	int* w;
	
	pd = d;

	printf("ポインタを固定で表示\n配列 data[] = ");
	for (pd = d, i = 0; d[i] != -999; i++) {
		w = pd + i;
		printf("%d,", *w);
		

	}
	printf("\b\n");

	printf("ポインタを変化させて表示\n配列 data[] = ");
	for (pd = d,i = 0; d[i] != -999; i++) {
		printf("%d,", *pd);
		pd++;
	}
	printf("\b\n");
}