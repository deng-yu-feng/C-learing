
#include <stdio.h>
int main()

{
	int line=0; //定义一个line变量
	while(line<3000)
	{
	printf("学习写代码:%d\n",line);  //%d显示行号
		line++; //打印一次，加一次line的数值
	}
	if (line==3000) //表示line等于3000时，跳出循环
	{
	printf("你可以找到一份好的工作\n");
	}
	return 0;
}