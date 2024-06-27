#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main() {
	int p, c;
	printf("何を出しますか?\n(1:グー 2:チョキ 3:パー) > ");
	scanf("%d", &p);
	printf("\n");
	srand(time(0));
	rand();
	c = rand() % 3 + 1;
	
	switch (p) {
	case 1: printf("プレイヤーはグーを出しました\n");
		break;
	case 2: printf("プレイヤーはチョキを出しました\n");
		break;
	case 3: printf("プレイヤーはパーを出しました\n");
		break;
	}
	switch (c) {
	case 1: printf("コンピュータはグーを出しました\n");
		break;
	case 2: printf("コンピュータはチョキを出しました\n");
		break;
	case 3: printf("コンピュータはパーを出しました\n");
		break;
	}
	printf("\n");

	if(p==c){
		printf("あいこです\n");
	}
	
	if (p == 1 && c == 2) {
		printf("プレイヤーの勝ちです\n");
	}
	else if (p == 1 && c == 3) {
		printf("コンピュータの勝ちです\n");
	}
	else if (p == 2 && c == 1) {
		printf("コンピュータ勝ちです\n");
	}
	else if (p == 2 && c == 3) {
		printf("プレイヤーの勝ちです\n");
	}
	else if (p == 3 && c == 1) {
		printf("プレイヤーの勝ちです\n");
	}
	else if (p == 3 && c == 2) {
		printf("コンピュータ勝ちです\n");
	}
}