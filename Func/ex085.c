#include<stdio.h>
void renketu(char*p,char*p2);

main() {
	char a[256], b[256];
	printf("�z��a : ");
	gets(a);
	printf("�z��b : ");
	gets(b);
	renketu(a, b);
	printf("�z��a : %s", a);
}

void renketu(char* p, char* p2) {
	int i, j;
	for (i = 0; *(p + i) != '\0'; i++);
	for (j = 0; *(p + i) = *(p2 + j); i++, j++);

}
