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
		printf("%d人目(名前) : ",i+1);
		scanf("%s", (p+i)->name);
		printf("%d人目(生年月日を空白で区切って入力) : ", i + 1);
		scanf("%d%d%d", &(p + i)->birth[0], &(p + i)->birth[1], &(p + i)->birth[2]);
		printf("%d人目(血液型を入力) : ", i + 1);
		scanf("%s", (p + i)->blood);
	}
	printf("\n");
	for (i = 0; i < 5; i++) {
		if (strcmp((p+i)->blood,"a")==0 || strcmp((p+i)->blood,"A")== 0) {
			printf("%s--%d年%d月%d日生まれ 血液型-%s型\n", (p + i)->name, (p + i)->birth[0], (p + i)->birth[1], (p + i)->birth[2], (p + i)->blood);
		}
	}
}