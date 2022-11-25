#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>


size_t mywcslen(wchar_t* str)
{
	int i = 0;
	while (*str != L'\0')
	{
		i++;
		str++;
	}

	return i;

}



wchar_t* mywcscpy(wchar_t* dest, const wchar_t* source)
{
	if (dest == NULL || source == NULL)
	{
		return NULL;
	}
	wchar_t* p = dest;
	while ((*dest++)=(*source++))
	{

	}
	return p;


}

//wchar_t *  宽字符指针

void main()
{
	setlocale(LC_ALL, "zh-CN");
	wchar_t* p = (wchar_t[100]){ 0 };
	wchar_t str[100] = L"今天也是元气满满的一天";
	mywcscpy(p, str);
	wprintf(L"%s", p);




}




void main1()
{
	setlocale(LC_ALL, "zh-CN");

	wchar_t str[10] = L"我是上帝";
	int length = mywcslen(str);
	printf("%d", length);






	system("pause");
}



//void main2()
//{
//	setlocale(LC_ALL, "zh_CN");
//	wchar_t ch = L"你";
//	putwchar(ch);
//
//	system("pause");
//}