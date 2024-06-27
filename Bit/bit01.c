#include<stdio.h>

enum bitstate {
	base = 0,
	poison = 1 << 0,
	sleep = 1 << 1,
	paralysis = 1 << 2,
	burn = 1 << 3,
	atkup = 1 << 4,
	atkdown = 1 << 5
};

typedef unsigned int UINT;

void DisplayStatus(UINT s);
void ChangeFlg(UINT* s);
void ClearFlg(UINT* s);

main() {
	UINT MyState = base;
	ChangeFlg(&MyState);
	//DisplayStatus(MyState);
	ClearFlg(&MyState);
	//DisplayStatus(MyState);
}

void DisplayStatus(UINT s) {
	printf("****���݂̏��****\n");
	if (s & poison) {
		printf("��\n");
	}
	if (s & sleep) {
		printf("����\n");
	}
	if (s & paralysis) {
		printf("���\n");
	}
	if (s & burn) {
		printf("�Ώ�\n");
	}
	if (s & atkup) {
		printf("�U���̓A�b�v\n");
	}
	if (s & atkdown) {
		printf("�U���̓_�E��\n");
	}
	if (s == base) {
		printf("��Ԉُ�Ȃ�\n");
	}
	printf("********************\n");
}

void ChangeFlg(UINT* s) {
	int a;
	while (1) {
		DisplayStatus(*s);
		printf("�ǂ̏�Ԃ�t�^���܂����H\n");
		printf("1:�� 2:���� 3:��� 4:�Ώ� 5:�U���� 6:�U���� 0:�I��>");
		scanf("%d", &a);
		if (a == 0) {
			break;
		}
		switch (a)
		{
		case 1:
			*s |= poison;
			break;
		case 2:
			*s |= sleep;
			break;
		case 3:
			*s |= paralysis;
			break;
		case 4:
			*s |= burn;
			break;
		case 5:
			*s |= atkup;
			break;
		case 6:
			*s |= atkdown;
			break;
		default:
			break;
		}
	}
}
void ClearFlg(UINT* s) {
	int a;
	while (1) {
		DisplayStatus(*s);
		printf("�ǂ̏�Ԃ��������܂����H\n");
		printf("1:�� 2:���� 3:��� 4:�Ώ� 5:�U���� 6:�U���� 7:�S���� 0:�I��>");
		scanf("%d", &a);
		if (a == 0) { break; }
		switch (a)
		{
		case 1:
			*s &= ~poison;
			break;
		case 2:
			*s &= ~sleep;
			break;
		case 3:
			*s &= ~paralysis;
			break;
		case 4:
			*s &= ~burn;
			break;
		case 5:
			*s &= ~atkup;
			break;
		case 6:
			*s &= ~atkdown;
			break;
		case 7:
			*s = base;
			break;
		default:
			break;
		}
	}
}