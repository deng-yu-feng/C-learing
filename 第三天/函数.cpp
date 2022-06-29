//利用函数完成两个数的相加
#include <stdio.h>

int Add(int x,int y)   //定义一个函数，输入x，y
{
	int z=0;
	z=x+y;
	return z;
}

int main()
{
	int num1=0;
	int num2=0;
	scanf("%d%d",&num1,&num2);
	int sum=Add(num1,num2);  //引用函数
	printf("%d\n",sum);
	return 0;
}