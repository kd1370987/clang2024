#include<stdio.h>
main() {
	int a[10] = { 10,20,30,40,50,60,70,80,90,100 };
	int c[10];
	int i;
	for (i = 0; i < 10; i++) {
		c[i] = a[9 - i];
		printf("%d ", c[i]);
	}
	
}