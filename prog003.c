// reversing and input line!
#include <stdio.h>

#define MAX 200

int read_line (char [ ]);
void copy (char to[ ], char from[ ]);
void reverse(char in[],int len);

int main()
{
	int len = 0;
	int maxlen = 0;
	char line[MAX];

	while ((len = read_line(line)) > 0)
	{
		reverse(line,len);
		printf("%s",line);	
	}
	return 0;
}

//function definitions
int read_line(char line[ ])
{	
	int len = 0;
	int c;
	while (((c = getchar()) != EOF) && (c != '\n'))
	{
		line[len] = c;
		++len;
	}
	if (c == '\n')
	{
		line[len] = c;
		++len;
		line[len] = '\0';
	}
	else //meaning (c == EOF)
	{
		line[len] = '\n';
		line[len+1]= '\0';
	}
	return len;
}

void copy (char to[ ], char from[ ])
{
	int i;
	for(i = 0; from[i] != '\0'; ++i)
		to[i] = from[i];
	++i;
	to[i] = '\0';
}

void reverse(char in[],int len)
{
	int i = len - 2;
	int j = 0;
	char dummy;
	while (i > j)
	{
		dummy = in[j];
		in[j] = in[i];
		in[i] = dummy;
		
		--i;
		++j;
	}
}
