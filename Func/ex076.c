#include<stdio.h>
void gh(int, int, int* sum, float* ave);

main(){
	int d1, d2,sum;
	float ave;
	printf("整数を二つ入力: ");
	scanf("%d%d", &d1, &d2);
	gh(d1, d2, &sum, &ave);
	printf("合計は%d、平均は%.2f\n", sum, ave);
}

void gh(int d1, int d2,int *sum,float *ave) {
	*sum = d1 + d2;
	*ave = *sum / (float)2;
	return;
}