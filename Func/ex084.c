#include<stdio.h>

void irekae(char*, char*);

main() {
	char str1[256], str2[256] = {};
	int cntW;
	printf("������? : ");
	scanf("%s",str1);	//�L�[�{�[�h���當��������
	printf("str1 : %s\n",str1);
	void irekae(str1,str2);
	printf("str2 : %s\n", str2);
	
}


void irekae(char *p, char *p2) {
	int cnt;
	for (cnt = 0; *p != '\0'; cnt++, p++);
	p--;
	cnt--;
	while (cnt >= 0) {
		*p2 = *p;
		p2++;
		p--;
		cnt--;
	}
	*p2 = '\0';
	return;
}