#include<stdio.h>
main() {
	int a, b;
	while (1) {
		printf("�����P�i�|�X�X�X�ŏI���j�H");
		scanf("%d", &a);
		printf("�����Q�i�|�X�X�X�ŏI���j�H");
		scanf("%d", &b);
		if (a == -999 || b == -999) { break; }
		if (b == 0) { continue; }
		printf("%d / %d = %d���܂�%d\n", a, b, a / b, a % b);

	}
}