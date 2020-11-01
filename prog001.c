#include <stdio.h>


int main()
{

	int c;
	int longest[200];
	int line[200];
	int maxlen=0;
	int len=0;
	int j=0;
	// read a line, save it inside line, output the length, if higher that maxlength save it in longest
	while ((c = getchar())!= EOF)
	{
		if (c = '\n')
		{
			line[j] = '\0';
			if (len >= maxlen)
			{
				maxlen = len;
				for (int i = 0;i<=len; ++i)
					longest[i] = line[i];
			j = 0;
			len = 0;
			}
		}
		else
		{
			line[j] = c;	
			++len;
			++j;
		}

		printf("\n\n -----The Longest Line\n\n");
		for (int i = 0; i <= maxlen; ++i)
			printf("%d",longest[i]);
		printf("\n");

	}


return 0;
}

