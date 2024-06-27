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
		printf("‰½‚ÅŒŸõ‚µ‚Ü‚·‚©H(1:¶‚Ü‚ê”N 2:¶‚Ü‚êŒ 3:ŒŒ‰tŒ^):");
		scanf("%d", &j);
		if (j == 1) {
			printf("¶‚Ü‚ê”N‚ğ“ü—Í„");
			scanf("%d", &k);
			for (i = 0; i < 5; i++) {
				if ((p + i)->dd.nen == k) {
					printf("%s--%d”N%dŒ%d“ú¶‚Ü‚ê ŒŒ‰tŒ^-%sŒ^\n", (p + i)->name, (p + i)->dd.nen, (p + i)->dd.tuki, (p + i)->dd.hi, (p + i)->blood);
				}
			}
		}
		if (j == 2) {
			printf("¶‚Ü‚êŒ‚ğ“ü—Í„");
			scanf("%d", &k);
			for (i = 0; i < 5; i++) {
				if ((p + i)->dd.tuki == k) {
					printf("%s--%d”N%dŒ%d“ú¶‚Ü‚ê ŒŒ‰tŒ^-%sŒ^\n", (p + i)->name, (p + i)->dd.nen, (p + i)->dd.tuki, (p + i)->dd.hi, (p + i)->blood);
				}
			}
		}
		if (j == 3) {
			printf("ŒŒ‰tŒ^‚ğ“ü—Í„");
			scanf("%s", &l);
			for (i = 0; i < 5; i++) {
				if (strcmp((p+i)->blood,l) == 0) {
					printf("%s--%d”N%dŒ%d“ú¶‚Ü‚ê ŒŒ‰tŒ^-%sŒ^\n", (p + i)->name, (p + i)->dd.nen, (p + i)->dd.tuki, (p + i)->dd.hi, (p + i)->blood);
				}
			}
		}
}