#include<stdio.h>
main() {
	int a = 100, b;
	int *p_a;	//�ϐ��̐錾
	p_a = &a;	//�|�C���^�̐錾
	b = *p_a;	//�A�h���X�̃Z�b�g
	printf("a = %d b = %d *p_a = %d\n", a, b, *p_a);
}