#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main() {
	int d, r,i=0;
	printf("�����ăQ�[��");
	srand(time(0));
	rand();
	r = rand() % 100 + 1;
	while (i >= 0) {
		printf("��(1�`100)����� : ");
		scanf("%d", &d);
		i++;
		if (d == r) {
			printf("������I\n%d��œ�����܂���\n", i);
			break;
		}
		if (d < r) {
			printf("%d���傫���ł�\n", d);
		}
		else {
			printf("%d��菬�����ł�\n",d);
		}
	}
}