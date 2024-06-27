#include<stdio.h>
main() {
	int tbl[][3] = { {10,20,30},{40,50,60},{70,80,90} };
	int* ptbl, i;

	ptbl = tbl[0];	//０行目の先頭アドレスを入れる

	for (i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%d ", *ptbl++);	//表示後に次のデータに進む
		}
		printf("\n");
	}
}