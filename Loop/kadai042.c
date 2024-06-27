#include <stdio.h>
main()
{
	int i,g;
	i = 1;
	g = 0;
	while (g <= 300) {
		printf("%d+", i);
		g = g + i;
		i++;
		
	}
	printf("\b=%d\n", g);
}