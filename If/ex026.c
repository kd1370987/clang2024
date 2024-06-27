#include <stdio.h>
main()
{
	int mo,m;
	printf("Œ‚ğ“ü—Í : ");
	scanf("%d", &mo);
	m = mo % 2;
	if (mo != 2) {
		if (mo <= 7 && m == 1 || mo > 7 && m == 0) {
			printf("ÅI“ú‚Í31“ú‚Å‚·\n");
		}
		else {
			printf("ÅI“ú‚Í30“ú‚Å‚·\n");
		}
	}
	else {
		printf("ÅI“ú‚Í28“ú‚Å‚·\n");
	}
}