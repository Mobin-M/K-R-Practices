#include <stdio.h>

int main()
{
	int line[6];
	line[0] = 'm';
	line[1] = 'o';
	line[2] = 'b';
	line[3] = '\n';
	for (int i = 0; i <= 3; ++i)
		printf("%d",line[i]);
	return 0;
}
