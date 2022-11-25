#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>





void mystrset(char* str, const char ch)
{
	for (char* newstr = str; *newstr != '\0'; *newstr++ = ch)
	{

	}



}

void *mystrsetdg(char* str, const char ch)
{
	if (*str != '\0')
	{
		return;
	}
	else
	{

		*str = ch;
		mystrsetdg(++str, ch);
		
	}
}




void main()
{
	char* p = (char[]){ "1234567890"};
	//strcpy(p, "123456789");
	printf("\n%s", p);
	
	mystrsetdg(p, 'a');
	
	printf("\n%s", p);


	system("pause");
}