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
		printf("���Ō������܂����H(1:���܂�N 2:���܂ꌎ 3:���t�^):");
		scanf("%d", &j);
		if (j == 1) {
			printf("���܂�N����́�");
			scanf("%d", &k);
			for (i = 0; i < 5; i++) {
				if ((p + i)->dd.nen == k) {
					printf("%s--%d�N%d��%d�����܂� ���t�^-%s�^\n", (p + i)->name, (p + i)->dd.nen, (p + i)->dd.tuki, (p + i)->dd.hi, (p + i)->blood);
				}
			}
		}
		if (j == 2) {
			printf("���܂ꌎ����́�");
			scanf("%d", &k);
			for (i = 0; i < 5; i++) {
				if ((p + i)->dd.tuki == k) {
					printf("%s--%d�N%d��%d�����܂� ���t�^-%s�^\n", (p + i)->name, (p + i)->dd.nen, (p + i)->dd.tuki, (p + i)->dd.hi, (p + i)->blood);
				}
			}
		}
		if (j == 3) {
			printf("���t�^����́�");
			scanf("%s", &l);
			for (i = 0; i < 5; i++) {
				if (strcmp((p+i)->blood,l) == 0) {
					printf("%s--%d�N%d��%d�����܂� ���t�^-%s�^\n", (p + i)->name, (p + i)->dd.nen, (p + i)->dd.tuki, (p + i)->dd.hi, (p + i)->blood);
				}
			}
		}
}