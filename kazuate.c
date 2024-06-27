#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main() {
	int d, r,i=0;
	printf("”‚ ‚ÄƒQ[ƒ€");
	srand(time(0));
	rand();
	r = rand() % 100 + 1;
	while (i >= 0) {
		printf("”(1`100)‚ğ“ü—Í : ");
		scanf("%d", &d);
		i++;
		if (d == r) {
			printf("‚ ‚½‚èI\n%d‰ñ‚Å“–‚½‚è‚Ü‚µ‚½\n", i);
			break;
		}
		if (d < r) {
			printf("%d‚æ‚è‘å‚«‚¢‚Å‚·\n", d);
		}
		else {
			printf("%d‚æ‚è¬‚³‚¢‚Å‚·\n",d);
		}
	}
}