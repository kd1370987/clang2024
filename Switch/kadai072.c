#include<stdio.h>
main() {
	char a;
	printf("アルファベット？ ");
	scanf("%c", &a);
	if (a >= 'a' && a <= 'z') {
		a = a - 0x20;
	}
	switch (a) {
	case 0x41:printf("America\nAustralia\n");
		break;
	case 0x45:printf("England\n");
		break;
	case 0x46:printf("France\n");
		break;
	case 0x4a:printf("Japan\n");
		break;
	}
}