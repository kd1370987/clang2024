#include<stdio.h>
main() {
	int t,i;
	int data[10] = { 10,5,30,77,16,3,47,29,37,33 };
	printf("�T��������� : ");
	scanf("%d", &t);
	for (i = 0; i < 10; i++) {
		printf("i=%d\n",i);
		if (data[i] == t) {
			printf("��������\n");
			break;
		}
	}
	printf("���[�v�I��\ni=%d\n", i);
	if (i == 10) {
		printf("���̓f�[�^%d�͌�����Ȃ�����\n", t);
	}
	else {
		printf("%d�ԖڂɌ�������\n",i);
	}
}