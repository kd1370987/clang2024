#include<stdio.h>
#include<string.h>
#define nin 5;
struct day {
	int nen;
	int tuki;
	int hi;
};
struct profile {
	char name[20];
	struct day dd;
	char blood[5];
};

main() {
	struct profile d[5] = {{"a",2000,2,11,"a"},{"b",2000,2,33,"ab"} ,{"c",2000,1,2,"o"},{"d",1999,1,2,"b"},{"e",1999,3,2,"a"} };
	struct profile* p;
	p = d;
	int i,j,k;
	char l;

	printf("\n");
		printf("何で検索しますか？(1:生まれ年 2:生まれ月 3:血液型):");
		scanf("%d", &j);
		if (j == 1) {
			printf("生まれ年を入力＞");
			scanf("%d", &k);
			for (i = 0; i < 5; i++) {
				if ((p + i)->dd.nen == k) {
					printf("%s--%d年%d月%d日生まれ 血液型-%s型\n", (p + i)->name, (p + i)->dd.nen, (p + i)->dd.tuki, (p + i)->dd.hi, (p + i)->blood);
				}
			}
		}
		if (j == 2) {
			printf("生まれ月を入力＞");
			scanf("%d", &k);
			for (i = 0; i < 5; i++) {
				if ((p + i)->dd.tuki == k) {
					printf("%s--%d年%d月%d日生まれ 血液型-%s型\n", (p + i)->name, (p + i)->dd.nen, (p + i)->dd.tuki, (p + i)->dd.hi, (p + i)->blood);
				}
			}
		}
		if (j == 3) {
			printf("血液型を入力＞");
			scanf("%s", &l);
			for (i = 0; i < 5; i++) {
				if (strcmp((p+i)->blood,l) == 0) {
					printf("%s--%d年%d月%d日生まれ 血液型-%s型\n", (p + i)->name, (p + i)->dd.nen, (p + i)->dd.tuki, (p + i)->dd.hi, (p + i)->blood);
				}
			}
		}
}