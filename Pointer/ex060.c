#include<stdio.h>
main() {
	char data[99];
	char* pdata;
	char sch;
	int i;
	i = 1;

	printf("data[] = ");
	scanf("%s", data);
	printf("検索文字は？ > ");
	scanf("%*c%c", &sch);
	printf("検索結果は、");

	pdata = data;

	while (*pdata) {
		if (sch == *pdata){
			printf("%d ", i);
		}
		pdata++;
		i++;
	}
	printf("文字目です。\n");
}