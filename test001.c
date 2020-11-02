#include <stdio.h>

int main()
{
	char line[6];
	line[0] = 'm';
	line[1] = 'o';
	line[2] = 'b';
	line[3] = '\n';
	line[4] = '\0';
	line[5] = 'i';
	printf("%s",line);
	return 0;
}
