#include<stdio.h>
main() {
	char data[15] = "C Language";
	char data2[15];
	char* pdata, * pdata2;

	pdata = data;//�擪�A�h���X�������
	pdata2 = data2;//�擪�A�h���X������

	printf("data[] = %s\n", pdata);

	while (*pdata2++ = *pdata++); //������R�s�[

	//���ʕ\��
	pdata2 = data2;//�擪�A�h���X������

	printf("data2[] = %s\n", pdata2);

	while (*pdata2) //*pdata2 != '\0'�̗��@'\0'�͋U
	{
		putchar(*pdata2++);
	}

	putchar('\n');
}