/*字符串以\0结尾****************************************************************
#include <stdio.h>
int main()
{
//	printf("hello word\n");   //"hello word\n"即为字符串
//	char arr[]="hello"; //字符串在结尾隐藏了一个\0的字符

	char arr1[]="abc";
	char arr2[]={'a','b','c','\0'};
	printf("%d\n",len);
	printf("%s\n",arr2); 

	
	return 0;
} 
*///*****************************************************************
//求字符串的长度
#include <stdio.h>
#include<string.h>   //引入长度的头文件
int main()
{

	char arr1[]="abc";
	char arr2[]={'a','b','c',"\0"};  //手动以\0结尾

    int len=strlen("abc");
    printf("%d\n",len);   //打印长度
	printf("%d\n",strlen(arr1));
	printf("%d\n",strlen(arr2));
        return 0;
} 
