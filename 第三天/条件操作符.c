#include <stdio.h>
int main()
{
	int a=0;
	int b=3;
	int max=0;
/*	if(a>b)
		max=a;
	else
		max=b;
		*/  //¿ÉÒÔÐ´³Émax=a>b?a:b;
	max=a>b?a:b;
	printf("%d\n",max);
	return 0;
}