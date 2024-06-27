#include<stdio.h>
main()
{
	int d1, d2;
	printf("®”1H");
	scanf("%d", &d1);
	printf("®”2H");
	scanf("%d", &d2);
	if (d1 != d2) {
		if (d1 > d2) {
			printf("%d‚Ì‚Ù‚¤‚ª%d‚æ‚è%d‘å‚«‚¢", d1, d2, d1 - d2);
		}
		else {
			printf("%d‚Ì‚Ù‚¤‚ª%d‚æ‚è%d¬‚³‚¢", d1, d2, d2 - d1);
		}
	}
	else {
		printf("%d‚Æ%d‚Í“™‚µ‚¢", d1, d2);
	}
}