#include<stdio.h>
main() {
	int a, b;
	char c;

	printf("®”‚PH ");
	scanf("%d", &a);
	printf("®”‚QH ");
	scanf("%d", &b);
	printf("‰‰ZqH ");
	scanf("%*c%c", &c);

	switch (c) {
	case 0x2b:printf("%d + %d = %d\n", a, b, a + b);
		break;
	case 0x2d:printf("%d - %d = %d\n", a, b, a - b);
		break;
	case 0x2a:printf("%d * %d = %d\n", a, b, a * b);
		break;
	case 0x2f:printf("%d / %d = %d\n", a, b, a / b);
		break;
	case 0x25:printf("%d “ %d = %d\n", a, b, a % b);
		break;
	}
}