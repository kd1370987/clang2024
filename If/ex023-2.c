#include <stdio.h>
main()
{
	int AD;
	printf("西暦を入力 : ");
	scanf("%d", &AD);
	if (0 == AD % 4) {
		if (0 == AD % 100) {
			if (0 == AD % 400) {
				printf("うるう年です\n");
			}
			else {
				printf("うるう年ではありません\n");
			}
		}
		else {
			printf("うるう年です\n");
		}
	}
	else {
		printf("うるう年ではありません\n");
	}

}