#include<stdio.h>
main() {
	int a = 0;
	while (a != -999) {
		printf("����(-999�œ��͏I��)?");
		scanf("%d", &a);
		printf("�W�i�� = %o\t�P�U�i�� = %x\n", a, a);	
	}
}