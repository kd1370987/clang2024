#include<stdio.h>
main() {
	int tbl[][3] = { {10,20,30},{40,50,60},{70,80,90} };
	int* ptbl, i;

	ptbl = tbl[0];	//�O�s�ڂ̐擪�A�h���X������

	for (i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%d ", *ptbl++);	//�\����Ɏ��̃f�[�^�ɐi��
		}
		printf("\n");
	}
}