#include <stdio.h>
main() {
	char data[] = "Apple";
	int i = 0;
	printf("ˆê•¶Žš‚¸‚Â•\Ž¦\n");
	while (data[i] != '\0') {
		printf("%c", data[i]);
		i++;
	}
	printf("\n•¶Žš—ñ‚Å•\Ž¦\n");
	printf("%s\n", data);
	printf("%s\n", &data[0]);
	printf("%s\n", &data[1]);
	printf("%s\n", &data[2]);
}