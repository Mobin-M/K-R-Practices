#include <stdio.h>


int main()
{

	int c;
	char longest[200];
	int line[200];
	int maxlen=0;
	int len=0;
	// read a line, save it inside line, output the length, if higher that maxlength save it in longest
	while ((c = getchar())!= EOF)
	{
		if (c = '\n')
		{
			line[len] = '\n';
			for (int j = 0; j <= len; ++j)
				printf("%d",line[j]);
		}
		else
		{
			line[len] = c;	
			++len;
		}

	}

return 0;
}

