#include<stdio.h>
main() {
	int i;
	char a;

	printf("１０進数の整数？");
	scanf("%d", &i);
	printf("アルファベット(o or x or d)?");
	scanf("%*c%c", &a);
	switch (a) {
	case 'o':printf("%o", i);
		break;
	case 'x':printf("%x", i);
		break;
	case 'd':printf("%d", i);
		break;
	}
}