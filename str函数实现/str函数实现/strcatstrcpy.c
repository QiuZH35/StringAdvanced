#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//递归实现

void  mystrcpy(char* dest,const char* source)
{
	

	if (*source == '\0')
	{
		return;
	}
	else
	{
		*dest = *source;
		mystrcpy(++dest, ++source);

	}



}

char* mystrcpywithreturn(char* dest, char* dests, const char* source)
{
	if (*source == '\0')
	{
		return;
	}
	else
	{
		*dest = *source;
		mystrcpywithreturn(++dest, dests, ++source);

	}

}


//副本机制
void mystrcpywithnull(char* dest, char* source)   //改变一个指针的值，需要二级指针
{

	dest = malloc(100);
	while ((*dest++) = (*source++))
	{

	}


}


//改变指针指向的值，传递指针即可
//改变指针变量储存的地址，传递指针的地址 ，二级指针




void newmystrcpywithnull(char** dest, char* source)
{
	*dest = malloc(100);   //*dest 的类型是char *
	char* dests = *dest;   //使用一个char* 存储  
	
	
	while ( (*dests++) =(*source++) )
	{

	}



}






void mystrcat(char** dest, char* source)
{
	
	char* dests = *dest;
	while (*dests !='\0')  //循环到尾部
	{
		dests++;
	}

	while (*dests++ = *source++);  //尾部拷贝


}





void main1()
{
	//char str[100] = { 0 };
	char* str = NULL;
	char str1[20] = "task";
	char str2[20] = "list";
	//mystrcpywithreturn (str, str,str1); //拷贝
	newmystrcpywithnull(&str, str1);
	//printf("%s", str);
	mystrcat(&str, str2);//拼接

	system(str);



	system("pause");
}