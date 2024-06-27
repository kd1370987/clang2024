#include <stdio.h>
main()
{
	int c,a = 50, b = 10;
	int	*pa, *pb;

	pa = &a;
	pb = &b;

	c = *pa + *pb;

	printf("%d", c);
}