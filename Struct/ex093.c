#include<stdio.h>
struct syouhinD {
	char name[20];
	int tanka;
	int kosuu;
};
main() {
	struct syouhinD syouhin[3] = { {"エンピツ",30,5},{"ケシゴム",50,2},{"フデバコ",500,3} };
	struct syouhinD* p;
	p = syouhin;
	int i;
	for (i = 0; i < 3; i++) {
		printf("商品名 : %s\t", (p + i)->name);
		printf("単価 : %4d\t", (p + i)->tanka);
		printf("個数 : %4d\t", (p + i)->kosuu);
		printf("金額 : ￥%4d\n", (p + i)->tanka * (p + i)->kosuu);
	}
}