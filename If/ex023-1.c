#include <stdio.h>
main()
{
	int ss, h, m, s;

	printf("�b������� : ");
	scanf("%d", &ss);

	if (ss >= 0) {
		if (ss <= 5000) {
			h = ss / 3600;
			s = ss % 3600;
			m = s / 60;
			s = s % 60;
			printf("%d����%d��%d�b�ł�\n", h, m, s);
		}
		else {
			printf("�T�O�O�O�b�ȓ��ɂ��Ă�������\n");
		}
	}
	else {
		printf("�}�C�i�X�̓G���[�ł�\n");
	}
}