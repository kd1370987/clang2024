#include <stdio.h>
main()
{
	char e;
	printf("演算子を入れて : ");
	scanf("%c", &e);
	switch (e) {
		case 0x2B:printf("加算です\n");
			break;
		case 0x2D:printf("減算です\n");
			break;
		case 0x2A:printf("乗算です\n");
			break;
		case 0x2F:printf("除算です\n");
			break;
		case 0x25:printf("あまりです\n");
			break;
		default: printf("その他です\n");
	}
}