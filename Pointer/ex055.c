#include<stdio.h>
main()
{
	int a[] = { 11, 22, 33, 44, 55, 66 };
	int* pa;
	float b[] = {11.1, 22.2, 33.3, 44.4};
	float* pb;
	int sum,i;
	float gb;

	pa = a;
	pb = b;

	for (sum = 0,i = 0; i < 6; i++) {
		sum = sum + *pa;
		pa++;
	}
	printf("�z��a ���v = %d\t���� = %.3f\n", sum, sum / 6.0);

	
	for (gb = 0,i = 0; i < 4; i++) {
		gb = gb + *pb;
		pb++;
	}
	printf("�z��b ���v = %.3f\t���� = %.3f\n", gb, gb / 4.0);
	

}