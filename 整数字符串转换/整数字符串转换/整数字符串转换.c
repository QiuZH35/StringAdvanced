
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>



int isint(char* pstr)
{
	 int num = 0;
	 int fuhao = 1;  //�տ�ʼ���������������ڴ�����
	if (pstr == NULL)
	{
		return num;
	}
	else
	{
		if (*pstr == '-')  //������
		{
			fuhao = -1;
			pstr++;   //��ַ��������λ
		}
		if (*pstr == '+')
		{
			fuhao = 1;
			pstr++;
		}
		while (*pstr != '\0')
		{
			//1234    0*10+1   1*10+2 
			//printf("%d", num);

			if (*pstr >= '0' && *pstr <= '9')
			{
				int data = *pstr - '0';
				num *= 10;
				num += data;
				
				//printf("����");
			}
			else  //����Ϊ���������
			{
				return 0;
			}

			pstr++;
		}
		return num*=fuhao;
	}


	
}

void main1()
{
	char str[30] = "+123450";
	int num = isint(str);

	printf("%d", num);




	system("pause");
}


char * inttochar( int num, char* pstr)
{
	if ( pstr == NULL)
	{
		return NULL;
	}
	else
	{
		if (num < 0)//����
		{
			*pstr ='-';
			num *= -1;
			pstr++;
		}
		int length=0;
		int data = num;
		while (data)  //����num�ĳ���
		{
			length++;
			data /= 10;
			
		}
		//printf("%d\n", length);
	
		//123456  %10  6     12345  %10 5
		for (int i = length-1; i>=0; i--)
		{
				
				int data = num % 10;
				printf("data=%d,num=%d\n", data, num);
				pstr[i] = data + '0';    //���ּ��ַ�0 ��Ϊ�����ַ�
				printf("i=%d,pstr=%c\n",i, pstr[i]);
				num /= 10;
		}
		printf("%c", pstr[0]);
		pstr[length+1] = '\0';
	}
	return pstr;

}

void main()
{
	int num = -23456781;
	char str[20];
	inttochar(num, str);
	printf("%s", str);
	system("pause");

}