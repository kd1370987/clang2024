#include<stdio.h>
void gh(int, int, int* sum, float* ave);

main(){
	int d1, d2,sum;
	float ave;
	printf("®”‚ğ“ñ‚Â“ü—Í: ");
	scanf("%d%d", &d1, &d2);
	gh(d1, d2, &sum, &ave);
	printf("‡Œv‚Í%dA•½‹Ï‚Í%.2f\n", sum, ave);
}

void gh(int d1, int d2,int *sum,float *ave) {
	*sum = d1 + d2;
	*ave = *sum / (float)2;
	return;
}