#include <stdio.h>
main()
{
	int gokei, ia;
	gokei = 0;
	printf("”‚ğ‚¢‚ê‚Ä");
	scanf("%d", &ia);
	while (ia != -999) {
		gokei += ia;
		printf("”‚ğ‚¢‚ê‚Ä");
		scanf("%d", &ia);
	}
	printf("‡Œv=%d\n", gokei);
}