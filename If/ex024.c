#include <stdio.h>
main()
{
	char w;
	printf("•¶Žš‚ð“ü—Í : ");
	scanf("%c", &w);
	if (w >= 0x41 && w <= 0x5A) {
		printf("‘å•¶Žš‚Å‚·");
	}
	else {
		printf("‚»‚Ì‘¼‚Ì•¶Žš‚Å‚·");
	}
}