#include<stdio.h>
#define TE 5	//É}ÉNÉç

int tblgokei4(int* p);
main() {
	int a[] = { 10,20,30,40,50 }, gokei;
	gokei = tblgokei4(a);
	printf("gokei = %d\n",gokei);
}

int tblgokei4(int* p) {
	int gokei = 0,i = 0;
	while (i < TE) {
		gokei += *p;
		*p++;
		i++;
	}
	return(gokei);
}

