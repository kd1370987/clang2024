#include<stdio.h>
#include<string.h>
struct profile {
	char name[20];
	int birth[3];
	char blood[5];
};

int main(viod) {
	struct profile n;

	printf("名前を入力 : ");
	scanf("%s", n.name);
	printf("生年月日を空白で区切って入力 : ");
	scanf("%d%d%d", n.birth, n.birth+1, n.birth+2);
	printf("血液型を入力 : ");
	scanf("%s", n.blood);

	printf("%s--%d年%d月%d日生 血液型-%s型", n.name, n.birth[0], n.birth[1], n.birth[2], n.blood);
}