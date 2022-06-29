#include <stdio.h>
int main()
{
	int a=10;
	int b=++a;//前置++，先++计算出结果，再赋值给变量

	printf("%d\n",b);
	printf("%d\n",a);
	return 0;
}