
#include <stdio.h>
int main()
{
	int a=0;
	printf("%d\n",~a); // 结果未-1，~按二进制位取反，把所有的二进制中数字，1变成0，0变成1
	return 0;
}

