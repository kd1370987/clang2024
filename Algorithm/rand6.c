#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main() {
	int p, c;
	printf("�����o���܂���?\n(1:�O�[ 2:�`���L 3:�p�[) > ");
	scanf("%d", &p);
	printf("\n");
	srand(time(0));
	rand();
	c = rand() % 3 + 1;
	
	switch (p) {
	case 1: printf("�v���C���[�̓O�[���o���܂���\n");
		break;
	case 2: printf("�v���C���[�̓`���L���o���܂���\n");
		break;
	case 3: printf("�v���C���[�̓p�[���o���܂���\n");
		break;
	}
	switch (c) {
	case 1: printf("�R���s���[�^�̓O�[���o���܂���\n");
		break;
	case 2: printf("�R���s���[�^�̓`���L���o���܂���\n");
		break;
	case 3: printf("�R���s���[�^�̓p�[���o���܂���\n");
		break;
	}
	printf("\n");

	if(p==c){
		printf("�������ł�\n");
	}
	
	if (p == 1 && c == 2) {
		printf("�v���C���[�̏����ł�\n");
	}
	else if (p == 1 && c == 3) {
		printf("�R���s���[�^�̏����ł�\n");
	}
	else if (p == 2 && c == 1) {
		printf("�R���s���[�^�����ł�\n");
	}
	else if (p == 2 && c == 3) {
		printf("�v���C���[�̏����ł�\n");
	}
	else if (p == 3 && c == 1) {
		printf("�v���C���[�̏����ł�\n");
	}
	else if (p == 3 && c == 2) {
		printf("�R���s���[�^�����ł�\n");
	}
}