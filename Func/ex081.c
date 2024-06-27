#include<stdio.h>
#define te 8

int sd(int *p);
int ss(int *p);

main() {
	int data[] = { 6,10,8,2,9,5,1,7 },max = 0,min = 0;
	
	printf("Å‘å’l = %d\n", sd(data));
	printf("Å¬’l = %d\n", ss(data));
}

int sd(int* p) {
	int max = *p,i = 0;
	while (i < te) {
		if (max < *p) {
			max = *p;
		}
		*p++;
		i++;
	}
	return max;
}

int ss(int* p) {
	int min = *p, i = 0;
	while (i < te) {
		if (min > *p) {
			min = *p;
		}
		*p++;
		i++;
	}
	return min;
}