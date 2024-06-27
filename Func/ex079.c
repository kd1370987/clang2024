#include<stdio.h>

int tblgokei3(int tbl[], int i);

main() {
	int a[] = { 10,20,30,40,50}, gokei;
	gokei = tblgokei3(a, 5);
	printf("gokei = %d\n", gokei);
}



int tblgokei3(int tbl[], int y) {
	int gokei = 0; int i = 0;
	while (i < y) {
		gokei += tbl[i];
		i++;
	}
	return gokei;
}