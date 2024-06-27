#include <stdio.h>
main() {
	int d,b;
	printf("整数を入力 : ");
	scanf("%d", &d);
	b = d / 10;
	switch (b) {
		case 1:printf("10点代です\n");
			break;
		case 2:printf("20点代です\n");
			break;
		case 3:printf("30点代です\n");
			break;
		case 4:printf("40点代です\n");
			break;
		default:printf("エラー\n");
	}

}