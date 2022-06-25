#include <stdio.h>
int main()
{
	//printf("%d\n",100);  //打印一个整数---%d
	//sizefo--操作符--用来计算类型或者变量所占空间的大小，单位为字节
	printf("%d\n",sizeof(char));
	printf("%d\n",sizeof(short));
	printf("%d\n",sizeof(int));
	printf("%d\n",sizeof(long));
	printf("%d\n",sizeof(float));
	printf("%d\n",sizeof(double));  //查看数据类型所占的大小
	return 0;
}