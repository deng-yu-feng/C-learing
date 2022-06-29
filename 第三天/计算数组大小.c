#include <stdio.h>
int main()
{

//计算数组的大小
	int arr[10]={ 0 };
	int sz;

	printf("%d\n",sizeof(arr)); //计算的是数组的总大小，单位是字节，一个int类型为4字节，所以此处为40字节
	printf("%d\n",sizeof(arr[0]));//结果为4
	sz = sizeof(arr)/sizeof(arr[0]);
	printf("%d\n",sz);  //结果为10

	return 0;
}