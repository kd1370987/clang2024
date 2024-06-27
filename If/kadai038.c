#include<stdio.h>
main() {
	char a;
	printf("ˆê•¶Žš“ü—ÍH");
	scanf("%c", &a);
	if (a >= 'a' && a <= 'z' || a >= 'A' && a <= 'Z') {
		if (a >= 'a' && a <= 'z') {
			printf("•ÏŠ·Œ‹‰Ê‚Í%c", a - 0x20);
		}
		else {
			printf("•ÏŠ·Œ‹‰Ê‚Í%c", a + 0x20);
		}
	}
	else {
		printf("%c", a);
	}
}