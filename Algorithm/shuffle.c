#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main() {
	int i, data[20],work,target;
	srand(time(0));
	printf("�V���b�t���O\n");
	for (i = 0; i < 20; i++) {
		data[i] = i+1;
		printf("data[%d] = %d\n", i, data[i]);
	}
	printf("�V���b�t����\n");
	for (i = 0; i < 20; i++) {
		rand();
		target = rand() % 20;
		work = data[i];
		data[i] = data[target];
		data[target] = work;
		printf("data[%d] = %d\n", i, data[i]);
	}
}