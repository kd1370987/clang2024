#include <stdio.h>
main() {
	int d,b;
	printf("��������� : ");
	scanf("%d", &d);
	b = d / 10;
	switch (b) {
		case 1:printf("10�_��ł�\n");
			break;
		case 2:printf("20�_��ł�\n");
			break;
		case 3:printf("30�_��ł�\n");
			break;
		case 4:printf("40�_��ł�\n");
			break;
		default:printf("�G���[\n");
	}

}