#include <stdio.h>
int main()
{
	int input=0;            //输入的值
	printf("加入我们:");
	printf("是否好好学习(1/0)?");
	scanf("%d",&input);
	if (input==1)
	{
		printf("你会找到心仪的工作\n");
	}   //分支
	else
	{
		printf("还需要继续加油\n");
	}   //分支{}可有可无
	return 0;
}