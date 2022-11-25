#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>
#include <stdlib.h>
#include <string.h>


char* mystrchr(const char* str, const char ch)
{
	char* dest = NULL;

	/*for (char* newp = str; *newp != '\0'; newp++)
	{
		if (*newp ==ch)
		{
			dest = newp;

			break;
		}

	}*/

	for (int i = 0; i < strlen(str); i++)
	{
		if (str[i] == ch)       //找到元素，赋值所在地址
		{
			dest = &str[i]; //str+i       
			break;
		}


	}


	return dest;
}

char* mystrchrdg(const char* str, const char ch)
{
	if (*str == '\0')
	{
		return NULL;
	}
	else
	{

		if (*str == ch)     //找到元素返回所在地址
		{
			return str;
		}

		mystrchrdg(++str, ch);

	}


}




void main12()
{
	char* p = mystrchrdg("calc", 'm');
	if (p == NULL)
	{
		printf("con not find");
	}
	else
	{
		printf("con find %p,%c",p,*p);


	}

	system("pause");


}