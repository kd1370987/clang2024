#include <stdio.h>
main()
{
	int g, n;
	g = 0;
	while (1) {
		printf("”‚ğ‚¢‚ê‚Ä : ");
		scanf("%d", &n);
		if (n == -999) {
			break;
		}
		g = g + n;
	}
	printf("‡Œv = %d", g);
}