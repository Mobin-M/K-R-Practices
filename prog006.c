// Fold
// folding long input lines
// folding happens after the last non-blank charaacter that occurs before n-th column of input

#include <stdio.h>

#define N 20
#define MAX 200
int main()
{	
	int c;
	int cnt = 0;
	int rem_cnt_tb=0;
	
	while ((c = getchar()) != EOF)
	{
		//count in tbstp
		rem_cnt_tb = 8 - (cnt % 8);
		if (c == '\t')
			cnt = cnt + rem_cnt_tb;
		else if (c == '\n')
			cnt = 0;
		else
			++cnt;
		
		if ((cnt >= N) && ((c == ' ') || (c == '\t')))
		{
			c = '\n';
			cnt = 0;
		}
		putchar(c);


	}

	return 0;
}
