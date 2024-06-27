#include<stdio.h>
#include<string.h>
struct profile {
	char name[20];
	int birth[3];
	char blood[5];
};

main() {
	struct profile d[5];
	struct profile* p;
	p = d;
	int i = 0;
	for (i = 0; i < 5; i++) {
		printf("%dl–Ú(–¼‘O) : ",i+1);
		scanf("%s", (p+i)->name);
		printf("%dl–Ú(¶”NŒŽ“ú‚ð‹ó”’‚Å‹æØ‚Á‚Ä“ü—Í) : ", i + 1);
		scanf("%d%d%d", &(p + i)->birth[0], &(p + i)->birth[1], &(p + i)->birth[2]);
		printf("%dl–Ú(ŒŒ‰tŒ^‚ð“ü—Í) : ", i + 1);
		scanf("%s", (p + i)->blood);
	}
	printf("\n");
	for (i = 0; i < 5; i++) {
		if (strcmp((p+i)->blood,"a")==0 || strcmp((p+i)->blood,"A")== 0) {
			printf("%s--%d”N%dŒŽ%d“ú¶‚Ü‚ê ŒŒ‰tŒ^-%sŒ^\n", (p + i)->name, (p + i)->birth[0], (p + i)->birth[1], (p + i)->birth[2], (p + i)->blood);
		}
	}
}