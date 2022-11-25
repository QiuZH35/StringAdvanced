
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h> 
#include <malloc.h>

void main11()
{
	char allstr[80] = "hello xiaoqiu hello cpp hello linux hello world";
	char findstr[10] = "cpp";
	char insertstr[30] = "hello c";

	char* p = strstr(allstr, findstr);//获取cpp字符串的首地址
	if (p == NULL)
	{
		printf("没有找到");

	}
	else
	{
		
		printf("找到%c,%p",*p,p);
		char tempstr[30];
		printf("\n%s", allstr);
		strcpy(tempstr, p + 4);  //临时字符串储存cpp后面的数据
		*(p + 4) = '\0';    //抹除在cpp后面字符串
		printf("\n%s", allstr);
		strcat(allstr, insertstr);
		printf("\n%s", allstr);
		strcat(allstr, tempstr);
		printf("\n%s", allstr);

	}

	printf("\n%s", allstr);




	system("pause");
}

void main22()
{
	char str[100] = "wangfang love money";
	char insertstr[30] = "liming than ";

	char* p = strstr(str, "love");
	
	if (p != NULL)
	{
		p += 5;

		int length = strlen(insertstr);
		for(char *p1=p+length;p1>=p;p1--) //从后向前移动
		{
			*(p1 + length) = *p1;  
			
		}
		for (char* p2 = insertstr, *pnew = p; *p2 != '\0'; p2++, pnew++)
		{
			*pnew = *p2;   //拷贝
		}

	}
	printf("%s\n", str);

	system("pause");
}




void main()
{
	char* p = alloca(30);   //栈区开辟空间
	strcpy(p, "wangfang love money");
	printf("%s\n", p);

	char instr[30] = "liming than ";

	int needlength = strlen(instr);
	p = alloca(strlen(p) + needlength + 1);//加1处理\0  ,重新分配空间
	
	strcpy(p, "wangfang love money");   
	char* p1 = strstr(p, "love");

	if (p1 != NULL)
	{
		p1 += 5;

		for (char* pnew = p1 + needlength; pnew >= p1; pnew--)
		{
			*(pnew + needlength) = *pnew;   //字符串交换


		}
		for (char* p2 = instr, *pnew = p1; *p2 != '\0'; p2++, pnew++)
		{
			*pnew = *p2;

		}





	}



	printf("%s\n", p);

	system("pause");
}