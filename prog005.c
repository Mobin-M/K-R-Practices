// entab
// tab stops are 8 columns 
// when reading input stream should always count where I am in tab stop 1-6 or 0-7 and reset
// when tab is pressed, see how many blanks are needed to fill the tabstop.

#include <stdio.h>

#define tbstp 8

int main()
{
	int c;
	int cnt=0;
	int b_cnt=0;
	while ((c=getchar()) != EOF)
	{
		if (c == '\n' || c == '\t')
		{
			cnt = 0;
			b_cnt = 0;
			putchar(c);
		}
		else if (c == ' ')
		{
			++b_cnt;
			putchar(c);
		}
		else
		{
			++cnt;
			b_cnt = 0;
			putchar(c);
		}

		// The situation when the stream reaches a tbstop with ending as blank! 
		if ((cnt + b_cnt) >= 8)
		{
			for (;b_cnt > 0; --b_cnt)
				putchar('\b');
			putchar('\t');
			cnt = 0;
			b_cnt = 0;
		}
			
	}	

	return 0;
}
