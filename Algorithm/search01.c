#include<stdio.h>
main() {
	int t,i;
	int data[10] = { 10,5,30,77,16,3,47,29,37,33 };
	printf("探査口を入力 : ");
	scanf("%d", &t);
	for (i = 0; i < 10; i++) {
		printf("i=%d\n",i);
		if (data[i] == t) {
			printf("見つかった\n");
			break;
		}
	}
	printf("ループ終了\ni=%d\n", i);
	if (i == 10) {
		printf("入力データ%dは見つからなかった\n", t);
	}
	else {
		printf("%d番目に見つかった\n",i);
	}
}