#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//�ݹ�ʵ��

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


//��������
void mystrcpywithnull(char* dest, char* source)   //�ı�һ��ָ���ֵ����Ҫ����ָ��
{

	dest = malloc(100);
	while ((*dest++) = (*source++))
	{

	}


}


//�ı�ָ��ָ���ֵ������ָ�뼴��
//�ı�ָ���������ĵ�ַ������ָ��ĵ�ַ ������ָ��




void newmystrcpywithnull(char** dest, char* source)
{
	*dest = malloc(100);   //*dest ��������char *
	char* dests = *dest;   //ʹ��һ��char* �洢  
	
	
	while ( (*dests++) =(*source++) )
	{

	}



}






void mystrcat(char** dest, char* source)
{
	
	char* dests = *dest;
	while (*dests !='\0')  //ѭ����β��
	{
		dests++;
	}

	while (*dests++ = *source++);  //β������


}





void main1()
{
	//char str[100] = { 0 };
	char* str = NULL;
	char str1[20] = "task";
	char str2[20] = "list";
	//mystrcpywithreturn (str, str,str1); //����
	newmystrcpywithnull(&str, str1);
	//printf("%s", str);
	mystrcat(&str, str2);//ƴ��

	system(str);



	system("pause");
}