#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main() {
	int d, r,i=0;
	printf("数あてゲーム");
	srand(time(0));
	rand();
	r = rand() % 100 + 1;
	while (i >= 0) {
		printf("数(1〜100)を入力 : ");
		scanf("%d", &d);
		i++;
		if (d == r) {
			printf("あたり！\n%d回で当たりました\n", i);
			break;
		}
		if (d < r) {
			printf("%dより大きいです\n", d);
		}
		else {
			printf("%dより小さいです\n",d);
		}
	}
}