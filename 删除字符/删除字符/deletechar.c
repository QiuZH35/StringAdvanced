
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void main()
{
	char str[50] = "hello xiaoqiu,hello huanghui,hello cpp";
	char* p = str;
	char ch = 'o';
	char laststr[50]={0};
	printf("oldstr=%s", str);
	int i = 0;//±£´æÏÂ±ê
	while(*p !='\0')
	{ 
		if (*p != ch)
		{
			laststr[i] = *p;
			i++;
		}
		else
		{

		}
		p++;

	}
		
	
	printf("\nnewstr=%s", laststr);



	system("pause");
}