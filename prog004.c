// Detab
// tab stops are 8 columns 
// when reading input stream should always count where I am in tab stop 1-6 or 0-7 and reset
// when tab is pressed, see how many blanks are needed to fill the tabstop.

#include <stdio.h>

#define tbstp 8

int main()
{
	int c;
	int cnt=0;
	while ((c=getchar()) != EOF)
	{
		// counting and resetting
		++cnt;
		if (cnt >= 8)
			cnt = 0;
		
		if (c == '\n')
		{
			putchar(c);
			cnt = 0;
		}
		else if (c == '\t')
		{
			for (int i = cnt; i <= tbstp; ++i)
				putchar(' ');
			cnt = 0;
		}
		else
			putchar(c);

	}	

	return 0;
}
