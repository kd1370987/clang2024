#include<stdio.h>
void ss(int, int* max, int* min);

main() {
	int d[3], max, min;
	printf("�������R���� : ");
	scanf("%d%d%d", &d[0], & d[1], &d[2]);
	ss(&d[0], &max, &min);
	printf("�ő�l = %d\t�ŏ��l = %d", max, min);
}

void ss(int *d[], int* max, int* min) {
	for (int i = 1; i < 3; i++) {
		*max = *d[0];
		*min = *d[0];
		if (*max < *(d[0] + 1)) {
			*max = *(d[0] + 1);
		}
		if (*min > *(d[0] + 1)) {
			*min = *(d[0] + 1);
		}

	}
	return;
}