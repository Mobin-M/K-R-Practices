#include <stdio.h>


int main()
{
	typedef struct 
	{
		int a;
		int* b;
	} struct1;

	struct1* Mobinp;
//	(*Mobinp).a = 10;
	printf("%p\n",Mobinp);
//	printf("%d\n",(*Mobinp).a);






	/*
	struct1 Mobin;
	Mobin.a = 10;
	
	int x = 24;
	Mobin.b = &x;
	
	printf("%d\n",Mobin.a);

	printf("%p\n%p\n",Mobin.b,&x);

	Mobin->b = 25;
	printf("%d\n%d\n",*Mobin.b,x);
	*/

	return 0;
}
