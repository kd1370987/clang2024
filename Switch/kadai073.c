#include<stdio.h>
main() {
	int i;
	char a;

	printf("�P�O�i���̐����H");
	scanf("%d", &i);
	printf("�A���t�@�x�b�g(o or x or d)?");
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