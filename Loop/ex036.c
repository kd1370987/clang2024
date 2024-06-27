#include <stdio.h>
main()
{
	int i;
	printf("break text program\n");
	for (i = 1; i <= 10; i++) {
		if (i == 7) {
			break;
		}
		printf("%3d", i);
	}
	printf("\n\ncontinue test program\n");
	for (i = 1; i <= 10; i++) {
		if (0 == i % 2) {
			continue;
		}
		printf("%3d", i);
	}
	
}