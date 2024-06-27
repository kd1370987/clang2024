#include <stdio.h>
main()
{
	float box[3],sum = 0;
	int i;
	for (i = 0; i < 3; i++) {
		printf("ŽÀ”‚ð“ü—Í : ");
		scanf("%f", & box[i]);
		sum = sum + box[i];
	}
	printf("‡Œv‚Í%.2f‚Å‚·\n", sum);
	printf("•½‹Ï‚Í%.2f‚Å‚·\n", sum / 3);
}