
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>
//#include <errors.h> �쳣���� ������ļ�ʹ��

void main()
{
	FILE* p = fopen("D:\\1.txt","r");
	char* buffer = strerror(errno);  //��ȡ��ǰ�����ִ�д���
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