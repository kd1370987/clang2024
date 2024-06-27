#include<stdio.h>
main()
{
	int s, i;
	int d[11] = { 10,5,30,77,15,3,47,29,37,33,0 };
	printf("”’l‚ğ“ü—Í : ");
	scanf("%d", &s);

	d[10] = s;

	for (i = 0; s != d[i]; i++);
	if (i == 10) {
		printf("Œ©‚Â‚©‚ç‚È‚©‚Á‚½\n");
	}
	else {
		printf("%d", i);
	}

}