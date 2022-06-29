#include <stdio.h>
int main()
{
	int a=3;
	int b=5;
	int c=a&&b;//即两边都为真的时候,结果为真，如果有一个为0，结果就为假
	int d=a||b;//逻辑或，即一个为真的时候，结果就为真
	printf("%d\n",c);  //输出结果为1真

	printf("%d\n",d);

	return 0;
}