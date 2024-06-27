#include<stdio.h>

int tblgokei1(int* p);
int tblgokei2(int tbl[]);
int tblgokei3(int tbl[], int i);
main() {
	int a[] = { 10,20,30,40,-999 }, gokei;
	gokei = tblgokei1(a);
	printf("gokei = %d\n",gokei);
	gokei = tblgokei2(a);
	printf("gokei = %d\n", gokei);
	gokei = tblgokei3(a, 5);
	printf("gokei = %d\n", gokei);
}

int tblgokei1(int* p) {
	int gokei = 0;
	while (*p != -999) {
		gokei += *p;
		*p++;
	}
	return(gokei);
}

int tblgokei2(int tbl[]) {
	int gokei = 0, i = 0;
	while (tbl[i] != -999) {
		gokei += tbl[i];
		i++;
	}
	return(gokei);
}

int tblgokei3(int tbl[], int y) {
	int gokei = 0; int i = 0;
	while (i < y-1	) {
		gokei += tbl[i];
		i++;
	}
	return gokei;
}