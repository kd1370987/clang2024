#include<stdio.h>
main() {
	int data[10] = { 10,23,4,5,4,2,43,6,90,98 };
	int i,max = data[1], min = data[1];
	for (i = 0; i < 10; i++)
	{
		if (data[i] > max) {
			max = data[i];
		}
		if (data[i] < min) {
			min = data[i];
		}
	}
	printf("max = %d\tmin=%d\n", max, min);
}