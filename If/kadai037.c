#include<stdio.h>
main() {
	int a,b;
	printf("�O����P�O�O�܂��̐����H");
	scanf("%d", &a);
	if (a < 0 && a>100) {b = 1;}
	else {
		if (a >= 30 && a < 50) { b = 2; }
		if (a >= 50 && a < 80) { b = 3; }
		if (a >= 80 && a < 90) { b = 4; }
		if (a >= 90) { b = 5; }
	}
	printf("���̐��l�̔��茋�ʂ́u%d�v�ł�", b);
}