#include <stdio.h>
main() {
	char data[] = "Apple";
	int i = 0;
	printf("一文字ずつ表示\n");
	while (data[i] != '\0') {
		printf("%c", data[i]);
		i++;
	}
	printf("\n文字列で表示\n");
	printf("%s\n", data);
	printf("%s\n", &data[0]);
	printf("%s\n", &data[1]);
	printf("%s\n", &data[2]);
}