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
	printf("****Œ»Ý‚Ìó‘Ô****\n");
	if (s & poison) {
		printf("“Å\n");
	}
	if (s & sleep) {
		printf("–°‚è\n");
	}
	if (s & paralysis) {
		printf("–ƒáƒ\n");
	}
	if (s & burn) {
		printf("‰Î\n");
	}
	if (s & atkup) {
		printf("UŒ‚—ÍƒAƒbƒv\n");
	}
	if (s & atkdown) {
		printf("UŒ‚—Íƒ_ƒEƒ“\n");
	}
	if (s == base) {
		printf("ó‘ÔˆÙí‚È‚µ\n");
	}
	printf("********************\n");
}

void ChangeFlg(UINT* s) {
	int a;
	while (1) {
		DisplayStatus(*s);
		printf("‚Ç‚Ìó‘Ô‚ð•t—^‚µ‚Ü‚·‚©H\n");
		printf("1:“Å 2:–°‚è 3:–ƒáƒ 4:‰Î 5:UŒ‚ª 6:UŒ‚« 0:I—¹>");
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
		printf("‚Ç‚Ìó‘Ô‚ð‰ðœ‚µ‚Ü‚·‚©H\n");
		printf("1:“Å 2:‡–° 3:–ƒáƒ 4:‰Î 5:UŒ‚ª 6:UŒ‚« 7:‘SÁ‚µ 0:I—¹>");
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