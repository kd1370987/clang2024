#include <stdio.h>
main()
{
	char o,a;
	int d1, d2, d3, max, min;
	max = 0;
	min = 9999;
	printf("処理を入力 : ");
	scanf("%c", &o);
	printf("整数を入力 : ");
	scanf("%d%d%d", &d1, &d2, &d3);
	switch (o) {
		case 0x44:for (int i = 0; i < 3; i++) {
				if (max < d1) {
					max = d1;
				}
				if (max < d2) {
					max = d2;
				}
				if (max < d3) {
					max = d3;
				}
			}
			  printf("最大値は%dです\n", max);
			  break;
		case 0x64:for (int i = 0; i < 3; i++) {
			if (max < d1) {
				max = d1;
			}
			if (max < d2) {
				max = d2;
			}
			if (max < d3) {
				max = d3;
			}
		}
				 printf("最大値は%dです\n", max);
				 break;
		case 0x53:for (int i = 0; i < 3; i++) {
			if (min > d1) {
				min = d1;
			}
			if (min > d2) {
				min = d2;
			}
			if (min > d3) {
				min = d3;
			}
		}
			  printf("最小値は%dです\n", min);
			  break;
		case 0x73:for (int i = 0; i < 3; i++) {
			if (min > d1) {
				min = d1;
			}
			if (min > d2) {
				min = d2;
			}
			if (min > d3) {
				min = d3;
			}
		}
				 printf("最小値は%dです\n", min);
				 break;
		case 0x47:printf("合計値は%dです\n", d1 + d2 + d3);
			break;
		case 0x67:printf("合計値は%dです\n", d1 + d2 + d3);
			break;
		case 0x48:printf("平均値は%dです\n", (d1 + d2 + d3) / 3);
			break;
		case 0x68:printf("平均値は%dです\n", (d1 + d2 + d3) / 3);
			break;
		default:printf("エラー");
	}
}