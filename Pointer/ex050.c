#include<stdio.h>
main() {
	int a = 100, b;
	int *p_a;	//変数の宣言
	p_a = &a;	//ポインタの宣言
	b = *p_a;	//アドレスのセット
	printf("a = %d &a = %d p_a = %d *p_a = %d &p_a = %d\n",a,&a,p_a,*p_a,&p_a);
}