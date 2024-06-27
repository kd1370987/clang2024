#include<stdio.h>
int strcnt(char *p);

main() {
	char buf[256];
	int mojisu;
	printf("文字列? : ");
	gets(buf);	//キーボードから文字列を入力
	mojisu = strcnt(buf);
	printf("入力された文字列の文字数は%d文字です。\n", mojisu);
}

int strcnt(char* p) {
	int cnt;
	for (cnt = 0; *p != '\0'; cnt++, p++);
	return(cnt);
}