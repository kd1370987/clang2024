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
	printf("****現在の状態****\n");
	if (s & poison) {
		printf("毒\n");
	}
	if (s & sleep) {
		printf("眠り\n");
	}
	if (s & paralysis) {
		printf("麻痺\n");
	}
	if (s & burn) {
		printf("火傷\n");
	}
	if (s & atkup) {
		printf("攻撃力アップ\n");
	}
	if (s & atkdown) {
		printf("攻撃力ダウン\n");
	}
	if (s == base) {
		printf("状態異常なし\n");
	}
	printf("********************\n");
}

void ChangeFlg(UINT* s) {
	int a;
	while (1) {
		DisplayStatus(*s);
		printf("どの状態を付与しますか？\n");
		printf("1:毒 2:眠り 3:麻痺 4:火傷 5:攻撃↑ 6:攻撃↓ 0:終了>");
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
		printf("どの状態を解除しますか？\n");
		printf("1:毒 2:睡眠 3:麻痺 4:火傷 5:攻撃↑ 6:攻撃↓ 7:全消し 0:終了>");
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