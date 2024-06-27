#include<stdio.h>

#define SS 8
int stack[SS];
int sp = 0;

void display(void);
int push(int d);
int pop(int* pd);

main() {
	int key, data, result;
	do {
		printf("\n\n���v�b�V����i�A�|�b�v��o����͂��ā�");
		key = getche();
		printf("\n");

		//�v�b�V������
		if (key == 'i') {
			printf("�f�[�^���́�");
			scanf("%d", &data);
			result = push(data);
			if (result == -1) {
				printf("\n�������X�^�b�N����t�ł�������\n");
			}
			else {
				display();
			}
		}

		//�|�b�v����
		if (key == 'o') {
			result = pop(&data);
			if (result == -1) {
				printf("\n�������X�^�b�N����ł�������\n");
			}
			else {
				printf("�X�^�b�N����f�[�^(%d)�����o���܂���\n", data);
				display();
			}
		}
	} while (key != 'e');
}



//�X�^�b�N�\���֐�
void display(void) {
	int i;
	printf("\n���������݂̃X�^�b�N�̓��e������\n");
	for (i = 0; i < SS; i++) {
		printf("stack[%2d]��%5d", i, stack[i]);
		if (i == sp) {
			printf("��sp�������Ă��鏊(����sp��%d)", sp);
		}
		printf("\n");
	}
	return;
}


//�X�^�b�N�Ƀf�[�^��ς�(�v�b�V������)�֐�
int push(int d) {
	if (sp > SS - 1) {
		return -1;
	}
	stack[sp] = d;
	sp += 1;
	return 0;
}


//�X�^�b�N����f�[�^�����o��(�|�b�v����)�֐�
int pop(int* pd) {
	if (sp == 0) { return -1; }
	*pd = stack[sp-1];
	sp -= 1;
	stack[sp] = 0;
	return 0;
}




