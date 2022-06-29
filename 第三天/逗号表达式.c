#include <stdio.h>
int main()
{
		int a=0;
		int b=3;
		int c=5;
		int d=(a=b+2,c=a-4,b=c+2);
		//逗号表达式，是从左向右依次计算的，整个表达式的结果是最后一个表达式的结果
		printf("%d\n",d);  //结果为3
		return 0;
}