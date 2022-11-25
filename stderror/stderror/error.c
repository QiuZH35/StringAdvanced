
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>
//#include <errors.h> 异常常用 处理多文件使用

void main()
{
	FILE* p = fopen("D:\\1.txt","r");
	char* buffer = strerror(errno);  //获取当前程序的执行错误
	if (p == NULL)
	{
		printf("Error: %s", buffer);
		abort();
	}
	else
	{

	}
	system("pause");
}