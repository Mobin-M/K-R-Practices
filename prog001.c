// reading line by line and printing the longest without using functions!
#include <stdio.h>


int main()
{

	int c;
	char line[200];
	int len = 0;
	int maxlen = 0;
	char lline[200];
	//read a line save it in line[200] and count the length
	while ((c = getchar())!= EOF)
	{
		if (c == '\n')
		{
			line[len] = c;
			++len;
			line[len] = '\0';
			// if length is the biggest copy line into lline
			if (len >= maxlen)
			{
				maxlen = len;
				for (int i = 0; i <= len; ++i)
					lline[i] = line[i];
			}
			len = 0;
		}
		else
		{
			line[len] = c;
			++len;
		}
	}
	//printing the longest line
	printf("%s",lline);

return 0;
}

