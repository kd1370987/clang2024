#include<stdio.h>
main() {
	char data[99];
	char* pdata;
	char sch;
	int i;
	i = 1;

	printf("data[] = ");
	scanf("%s", data);
	printf("���������́H > ");
	scanf("%*c%c", &sch);
	printf("�������ʂ́A");

	pdata = data;

	while (*pdata) {
		if (sch == *pdata){
			printf("%d ", i);
		}
		pdata++;
		i++;
	}
	printf("�����ڂł��B\n");
}