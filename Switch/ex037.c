#include <stdio.h>
main()
{
	char e;
	printf("‰‰Zq‚ğ“ü‚ê‚Ä : ");
	scanf("%c", &e);
	switch (e) {
		case 0x2B:printf("‰ÁZ‚Å‚·\n");
			break;
		case 0x2D:printf("Œ¸Z‚Å‚·\n");
			break;
		case 0x2A:printf("æZ‚Å‚·\n");
			break;
		case 0x2F:printf("œZ‚Å‚·\n");
			break;
		case 0x25:printf("‚ ‚Ü‚è‚Å‚·\n");
			break;
		default: printf("‚»‚Ì‘¼‚Å‚·\n");
	}
}