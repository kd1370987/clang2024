#include<stdio.h>
struct syouhinD {
	char name[20];
	int tanka;
	int kosuu;
};
main() {
	struct syouhinD syouhin[3] = { {"�G���s�c",30,5},{"�P�V�S��",50,2},{"�t�f�o�R",500,3} };
	struct syouhinD* p;
	p = syouhin;
	int i;
	for (i = 0; i < 3; i++) {
		printf("���i�� : %s\t", (p + i)->name);
		printf("�P�� : %4d\t", (p + i)->tanka);
		printf("�� : %4d\t", (p + i)->kosuu);
		printf("���z : ��%4d\n", (p + i)->tanka * (p + i)->kosuu);
	}
}