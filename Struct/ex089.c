#include<stdio.h>
#include<string.h>
struct profile {
	char name[20];
	int birth[3];
	char blood[5];
};

int main(viod) {
	struct profile n;

	printf("���O����� : ");
	scanf("%s", n.name);
	printf("���N�������󔒂ŋ�؂��ē��� : ");
	scanf("%d%d%d", n.birth, n.birth+1, n.birth+2);
	printf("���t�^����� : ");
	scanf("%s", n.blood);

	printf("%s--%d�N%d��%d���� ���t�^-%s�^", n.name, n.birth[0], n.birth[1], n.birth[2], n.blood);
}