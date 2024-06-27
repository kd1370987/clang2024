#include <stdio.h>
main() {
	char data1[80], data2[80], w[80];
	int i;
	printf("•¶Žš—ñ1‚ð“ü—Í : ");
	scanf("%s", &data1);
	printf("•¶Žš—ñ2‚ð“ü—Í : ");
	scanf("%s", &data2);
	printf("moji1 = %s	moji2 = %s\n", &data1[0], &data2[0]);
	printf("“ü‚ê‘Ö‚¦‚é‚Æ\n");

	i = 0;
	while (data1[i] != '\0') {
		w[i] = data1[i];
		i++;
	}
	w[i] = '\0';

	i = 0;
	while (data2[i] != '\0') {
		data1[i] = data2[i];
		i++;
	}
	data1[i] = '\0';

	i = 0;
	while (w[i] != '\0') {
		data2[i] = w[i];
		i++;
	}
	data2[i] = '\0';
	printf("moji1 = %s	moji2 = %s", &data1[0], &data2[0]);
}