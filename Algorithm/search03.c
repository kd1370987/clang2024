#include<stdio.h>
main() {
	int low, high, mid, s;
	int d[11] = { 10,15,18,23,28,35,47,55,68,78,96 };

	printf("’T¸Œû‚ğ“ü—Í : ");
	scanf("%d", &s);

	low = 0;
	high = 10;

	while (low <= high) {
		mid = (low + high) / 2;

		if (s == d[mid]) {
			break;
		}

		if (d[mid] < s) {
			low = mid + 1;
		}
		if (d[mid] > s) {
			high = mid - 1;
		}
	}

	if (low > high) {
		printf("Œ©‚Â‚©‚ç‚È‚©‚Á‚½\n");
	}
	else {
		printf("%d", mid);
	}
}