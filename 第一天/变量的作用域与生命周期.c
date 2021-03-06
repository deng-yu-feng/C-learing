/*变量的作用域***************************************************************************************
#include <stdio.h>
int g_val=2022;//全局变量的作用域：整个工程
int main()
{
	//作用域与生命周期
	//作用域：即变量在哪里可以使用，就是变量的作用域
	printf("第一次打印全局变量:%d\n",g_val);
	{
		int a=10;
		printf("a=%d\n",a);  //只能在{}此区域内使用---局部变量的作用域：就是变量所在的局部范围
	printf("第二次打印全局变量:%d\n",g_val);
	}
	printf("第三次打印全局变量:%d\n",g_val);
	return 0;
}
*///***********************************************************************************************

/*
全局变量跨文件使用的声明
主函数前面声明：extern int 变量名;
*/


//变量生命周期*************************************************************************************
#include <stdio.h>
int b=20; //全局变量的生命周期，程序的生命周期
int main()
{
	printf("第一次打印全局变量:%d\n",b);
	{
	int a =10;  //局部变量的生命周期：进入局部范围生命开始，出范围生命结束
	printf("%d\n",a);
	printf("第二次打印全局变量:%d\n",b);
	}
	printf("第三次打印全局变量:%d\n",b);
	return 0;
}

