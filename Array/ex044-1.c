#include <stdio.h>
main() {
	char data1[80], data2[80], w[80];
	int i;

	printf("������1����� : ");
	scanf("%s", &data1);

	printf("������2����� : ");
	scanf("%s", &data2);

	printf("moji1 = %s	moji2 = %s\n", &data1[0], &data2[0]);
	printf("����ւ����\n");

	for (i = 0; w[i] = data1[i]; i++);
	for (i = 0; data1[i] = data2[i]; i++);
	for (i = 0; data2[i] = w[i]; i++);

	printf("moji1 = %s\tmoji2 = %s", &data1[0], &data2[0]);
}