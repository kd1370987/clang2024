#include<stdio.h>
main() {
	int d;
	printf("�����H");
	scanf("%d", &d);
	if (d == 0) {
		printf("���͒l�́u�[���v�ł�");
	}
	if (d < 0) {
		printf("���͒l�́u�}�C�i�X�v�ł�");
	}
	if (d > 0) {
		printf("���͒l�́u�v���X�v�ł�");
	}
}