#include <stdio.h>
main()
{
	int ss, m, h, s;
	printf("•b”‚ğ“ü—Í : ");
	scanf("%d", &ss);
	if (ss <= 5000) {
		h = ss / 3600;
		s = ss % 3600;
		m = s / 60;
		s = s - (m * 60);
		printf("%dŠÔ%d•ª%d•b\n", h, m, s);
	}
	else {
		printf("ƒGƒ‰[\n");
	}
}