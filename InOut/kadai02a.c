#include<stdio.h>
main() {
	double a, b;
	printf("��̎����l?");
	scanf("%lf%lf", &a, &b);
	printf("***%f��%f�̎l�����Z***\n", a, b);
	printf("�a = %f", a + b);
	printf(" �� = %f", a - b);
	printf(" �� = %f", a * b);
	printf(" �� = %f\n", a / b);

}