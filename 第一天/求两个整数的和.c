#include <stdio.h>
//scanf函数为输入函数

int main()
{
	int a=0;
	int b=0;
	int sum=0;
	printf("请输入两个数字，之间用空格隔开:\n");
	scanf("%d%d",&a,&b);
	sum=a+b;
	printf("sum = %d\n",sum);
	return 0;	
}