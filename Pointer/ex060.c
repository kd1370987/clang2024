#include<stdio.h>
main() {
	char data[99];
	char* pdata;
	char sch;
	int i;
	i = 1;

	printf("data[] = ");
	scanf("%s", data);
	printf("ŒŸõ•¶š‚ÍH > ");
	scanf("%*c%c", &sch);
	printf("ŒŸõŒ‹‰Ê‚ÍA");

	pdata = data;

	while (*pdata) {
		if (sch == *pdata){
			printf("%d ", i);
		}
		pdata++;
		i++;
	}
	printf("•¶š–Ú‚Å‚·B\n");
}