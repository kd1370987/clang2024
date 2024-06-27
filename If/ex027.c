#include <stdio.h>
main()
{
	char w;
	printf("•¶Žš‚ð“ü—Í : ");
	scanf("%c", &w);
	if (w > 0x41 && w < 0x5A || w>0x61 && w < 0x7A) {
		if (w > 0x61 && w < 0x7A) {
			printf("•ÏŠ·‚·‚é‚Æ%c\n", w- 0x20);
		}
		else {
			printf("•ÏŠ·‚·‚é‚Æ%c\n", w + 0x20);
		}
	}
	else {
		printf("ƒGƒ‰[\n");
	}
}