#define _CRT_SECURE_NO_WARNINGS



#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int exeshell1(char* cmd, char* result)
{
	FILE* pf = _popen(cmd, "r");//��ȡ
	if (pf == NULL)
	{
		printf("�ܵ���ʧ��");
		return 0;
	}
	else
	{
		while (!feof(pf)) //���ļ�ĩβ����1��û�з���0
		{
			char str[1024] = { 0 };
			if (fgets(str,1024, pf))  //����ֵ���Ƕ��������ַ�
			{
				strcat(result, str);//ƴ���ַ�

			}

		}
		_pclose(pf);
		return 1;
	}
	
}
int  exeshell(char* cmd, char* result)//����ָ����ؽ��
{
	FILE* pf = _popen(cmd, "r");//��һ���ܵ����ùܵ�ִ��cmd;
	if (pf == NULL)
	{
		printf("�����ܵ�ʧ��");
		return 0;
	}
	else
	{
		while (!feof(pf))//���ļ�ĩβ����1��û�з���0
		{
			char str[256] = { 0 };
			if (fgets(str, 256, pf))//����ֵ���Ƕ������ٸ��ַ�
			{
				strcat(result, str);//ƴ���ַ���
			}

		}
		_pclose(pf);//�رչܵ�





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