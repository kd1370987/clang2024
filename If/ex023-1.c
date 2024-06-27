#include <stdio.h>
main()
{
	int ss, h, m, s;

	printf("•b”‚ð“ü—Í : ");
	scanf("%d", &ss);

	if (ss >= 0) {
		if (ss <= 5000) {
			h = ss / 3600;
			s = ss % 3600;
			m = s / 60;
			s = s % 60;
			printf("%dŽžŠÔ%d•ª%d•b‚Å‚·\n", h, m, s);
		}
		else {
			printf("‚T‚O‚O‚O•bˆÈ“à‚É‚µ‚Ä‚­‚¾‚³‚¢\n");
		}
	}
	else {
		printf("ƒ}ƒCƒiƒX‚ÍƒGƒ‰[‚Å‚·\n");
	}
}