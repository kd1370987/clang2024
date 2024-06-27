#include<stdio.h>
main() {
	int a,b;
	printf("０から１００まえの整数？");
	scanf("%d", &a);
	if (a < 0 && a>100) {b = 1;}
	else {
		if (a >= 30 && a < 50) { b = 2; }
		if (a >= 50 && a < 80) { b = 3; }
		if (a >= 80 && a < 90) { b = 4; }
		if (a >= 90) { b = 5; }
	}
	printf("その数値の判定結果は「%d」です", b);
}