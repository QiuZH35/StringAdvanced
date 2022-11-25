#define _CRT_SECURE_NO_WARNINGS



#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int exeshell1(char* cmd, char* result)
{
	FILE* pf = _popen(cmd, "r");//读取
	if (pf == NULL)
	{
		printf("管道打开失败");
		return 0;
	}
	else
	{
		while (!feof(pf)) //到文件末尾返回1，没有返回0
		{
			char str[1024] = { 0 };
			if (fgets(str,1024, pf))  //返回值就是读到多少字符
			{
				strcat(result, str);//拼接字符

			}

		}
		_pclose(pf);
		return 1;
	}
	
}
int  exeshell(char* cmd, char* result)//传递指令，返回结果
{
	FILE* pf = _popen(cmd, "r");//打开一个管道，用管道执行cmd;
	if (pf == NULL)
	{
		printf("创建管道失败");
		return 0;
	}
	else
	{
		while (!feof(pf))//到文件末尾返回1，没有返回0
		{
			char str[256] = { 0 };
			if (fgets(str, 256, pf))//返回值就是读到多少个字符
			{
				strcat(result, str);//拼接字符串
			}

		}
		_pclose(pf);//关闭管道





		return 1;
	}






}




void main()
{
	char result[1024*10]={0};
	char cmd[32] = "tasklist";
	if (exeshell(cmd, result) !=0)
	{
		printf("%s", result);
	}




	system("pause");
}