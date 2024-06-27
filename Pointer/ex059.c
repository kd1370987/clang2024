#include<stdio.h>
main() {
	char data[15] = "C Language";
	char data2[15];
	char* pdata, * pdata2;

	pdata = data;//先頭アドレスをいれる
	pdata2 = data2;//先頭アドレスを入れる

	printf("data[] = %s\n", pdata);

	while (*pdata2++ = *pdata++); //文字列コピー

	//結果表示
	pdata2 = data2;//先頭アドレスを入れる

	printf("data2[] = %s\n", pdata2);

	while (*pdata2) //*pdata2 != '\0'の略　'\0'は偽
	{
		putchar(*pdata2++);
	}

	putchar('\n');
}