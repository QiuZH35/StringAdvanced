
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

void deletestr(char* str, char* delstr)
{
	
	char* p = strstr(str, delstr);
	if (p == NULL)
	{
		return;
	}
	else {
		while (*str)
		{
			int length = strlen(delstr);

			while (*p = *(p++ + length))
			{

			}
			str++;
		}
	}
}

void delallstr(char* str, char* delstr)
{
	int i = 0;
	int j = 0;
	while((str[i]=str[j])!='\0')
	{
		int flag = 1;//��ʾ�ҵ���
		for (int k = 0; k < strlen(delstr); k++)
		{
			if (str[j + k] != delstr[k] || str[j + k] == '0') //���ң���һ�����Ⱦ���ǰ������Ԥ��ĸ�����޸�
			{
				flag = 0;
				break;
			}
		}
		if (!flag)
		{
			i++;
			j++;  //�Ҳ���ͬ��
		}
		else
		{
			j += strlen(delstr);  //�ҵ������Ǹ�����
		}

	}
}

void delallstraddr(char* str, char* delstr)
{
	char* p1 = str;
	char* p2 = str;
	while ((*p1 = *p2) != '\0')
	{
		int flag = 1;
		char* px = p2;
		char* py = delstr;
		while (*py != '\0')
		{
			if (*px != *py || *px == '\0')
			{
				flag = 0;
				break;
			}
			px++;
			py++;

		}
		if (!flag)
		{
			p1++;
			p2++;
		}
		else
		{
			p2 += strlen(delstr);
		}






	}




}



void main1()
{

	char str[1024] = { "i love china love you i love money i love girl" };
	printf("\n%s", str);

	//deletestr(str, "love");
	delallstraddr(str, "love");
	printf("\n%s", str);



	system("pause");
}

void Wdelallstr(wchar_t* str, wchar_t *delstr)
{
	wchar_t* p1 = str;
	wchar_t* p2 = str;

	while ((*p1 = *p2) != L'\0')
	{
		int flag = 1;
		wchar_t* px = p2;
		wchar_t* py = delstr;

		while (*py != L'\0')
		{
			if (*px != *py || *px == L'\0')
			{
				flag = 0;
				break;
			}
			px++; py++;

		}
		if (!flag)
		{
			p1++;
			p2++;


		}
		else
		{

			p2 += wcslen(delstr);
		}





	}



}


void main()
{
	setlocale(LC_ALL, "zh-CN");
	wchar_t wstr[1024] = L"�й�������ǳǡ��һȺ̫������¥���������䣬�й��ӣ��й���";

	wchar_t delstr[1024] = L"�й�";
	Wdelallstr(wstr, delstr);

	wprintf(L"%Ls", wstr);
	system("pause");

}