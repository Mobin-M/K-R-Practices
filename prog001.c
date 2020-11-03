#include <stdio.h>


int main()
{

	int c;
	int line[200];
	int len = 0;
	//read a line save it in line[200] and count the length
	while ((c = getchar())!= EOF)
	{
		if (c = '\n')
		{
			//line[len] = '\n';
			//++len;
			//line[len] = '\0';
			for (int j = 0; j <= len; ++j)
				printf("%c",line[j]);
		}
		else
		{
			line[len] = c;
			++len;
		}

	}

return 0;
}

