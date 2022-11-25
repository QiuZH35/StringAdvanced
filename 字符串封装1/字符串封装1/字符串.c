
#define _CRT_SECURE_NO_WARNINGS
#include "�ַ���.h"


char* mystrchr(const char* dest, char ch)
{
	if (dest == NULL)
	{
		return NULL;
	}
	while (*dest != '\0')
	{
		if (*dest == ch)
		{
			return dest;
		}
		dest++;
	}


	return NULL;

}

int mystrlen(char* p)
{
	int length = 0;
	if (p == NULL)
	{
		return 0;
	}
	else
	{
		while (*p != '\0')
		{
			length++;
			p++;
		}
	}
	return length;

}

char* mystrcpy(char* dest, const char* source)
{
	if (source == NULL || dest == NULL)
	{
		return NULL;
	}
	else
	{
		while ((*(dest++) = *(source++)) != '\0');
	}
	return dest;

}

char* mystrcat(char* dest, const char* source)
{
	if (dest == NULL || source == NULL)
	{
		return NULL;
	}
	else
	{
		char* destbak = dest;
		while (*dest != '\0')
		{
			dest++;
		}
		while (( * (dest++) = *(source++)) != '\0');

		
	}
	*dest = '\0';
	return dest;
	

}

char* mystrstr(const char* const dest, const char* const find)
{
	if (dest == NULL || find == NULL)
	{
		return NULL;
	}
	char* destbak = dest;
	char* p = NULL;
	while (*destbak != '\0')
	{
		int flag = 1;//�ٶ����
		char* findbak = find;
		char* nowdestbak = destbak;
		while (*findbak != '\0' && *nowdestbak != '\0')
		{
			if (*nowdestbak != '\0')
			{
				if (*findbak != *nowdestbak)
				{
					flag = 0;
				}
				findbak++;
				nowdestbak++;

			}
			else
			{
				break;
			}
		}
		if(flag==1)
		{ 
			p = destbak;
			return p;
		}


		destbak++;
	}



	return NULL;


}






void init(mystring* string)   //ԭ�ⲻ����ʼ��
{
	string->p = NULL;
	string->reallength = 0;//��ʼ���ṹ���ַ���


}
void initwithlength(mystring* string, int length)//���ٳ��ȣ��ڴ�����
{
//	string->p =(char*) malloc(sizeof(char) * length);
	string->p = (char*)calloc(length, sizeof(char));//�����ڴ沢����
	string->reallength = length+1;//����


}
void initwithstring(mystring* string, char* copystring)//��ʼ��������
{
	int length = mystrlen(copystring);//��ȡ�ַ�������
	string->p = (char *)calloc(length + 1, sizeof(char));

	mystrcpy(string->p, copystring);//�����ַ���

}
void printfstring(mystring *string)  //��ӡ
{
	printf("\nstring=%s\n", string->p);


}
void run(mystring* string)
{


	system(string->p);
}


void backaddchar(mystring* string, char ch) 
{
	if (mystrlen(string->p + 1) == string->reallength)  //�ж��Ƿ���
	{
		string->p = (char *)realloc(string->p, string->reallength + 1);
		string->reallength += 1;//���ӳ���

		string->p[string->reallength - 2] = ch;
		string->p[string->reallength - 1] = '\0';
	}
	else
	{
		int nowlenght = mystrlen(string->p);//�����ǰ����
		string->p[nowlenght] = ch;
		string->p[nowlenght+1] = '\0';
	}
	
}
void backaddstring(mystring* string, char* str)
{
	int nowstringlength = mystrlen(string->p);//��ȡ��ǰ����
	int addstringlength = mystrlen(str);//Ҫ���ӵĳ���

	if ((nowstringlength + addstringlength + 1) > string->reallength)
	{
		int needaddlength = nowstringlength + addstringlength + 1-string->reallength;
		printf("string1->p=%s,%s\n", string->p, str);
		

		//string->p= (char*)realloc((string->p), (string->reallength + needaddlength));
		
		printf("string2->p=%s,%s\n", string->p, str);
		mystrcat(string->p,str );//�����ַ���

		printf("%s,%s", string->p, str);

		string->reallength += needaddlength;//���ӳ���

	}
	else
	{

		mystrcat(string->p, str);//�����ַ���

	}


}



char* findfirstch(mystring* string, char ch)
{
	char* p = mystrchr(string->p, ch);
	return p;

}



char* findstring(mystring* string, char* str)
{
	char* pres = mystrstr(string->p,str);
	return pres;

}

int deletefirstchar(mystring* string, char ch)
{
	char* p = mystrchr(string->p, ch);
	char* pnext = p + 1;
	while (*pnext != '\0')
	{
		*p = *pnext;  //������ǰ�ƶ�
		*p++;
		*pnext++;


	}
	*p = '\0'; //�ַ�������һ��Ҫ��\0

}


int deletefirststring(mystring* string, const char* ch)
{
	char* pres = mystrstr(string->p, ch);
	if (pres == NULL)
	{
		return -1;


	}
	else
	{
		int length = mystrlen(ch);
		char* pnext = pres + length;
		while (*pnext != '\0')
		{
			*pres = *pnext;
			pres++;
			pnext++;


		}
		*pres = '\0';

		return 1;

	}


}


void insertchar(mystring* string, char ch, char* pos)
{
	if (pos == NULL || string == NULL)
	{
		return;
	}
	if(mystrlen(string->p)+1 == string->reallength) //��ζ������
	{
		printf("0=%s\n", string->p);

		/*string->p = (char *)realloc((char *)string->p, string->reallength + 1);
		string->reallength += 1;*/
		printf("1=%s\n", string->p);

		int  nowlength = mystrlen(string->p);
		int movelength = mystrlen(pos);//Ҫ�ƶ��ĳ���
		for (int i = nowlength; i > nowlength - movelength; i--)
		{
			string->p[i] = string->p[i - 1];
		}

		string->p[nowlength - movelength] = ch;
		printf("2=%s\n", string->p);

	}
	else
	{
		int  nowlength = mystrlen(string->p);
		int movelength = mystrlen(pos);//Ҫ�ƶ��ĳ���
		printf("3=%s\n", string->p);

		for (int i = nowlength; i > nowlength-movelength; i--)
		{
			string->p[i] = string->p[i - 1];  //����ƶ�
		}
		string->p[nowlength - movelength] = ch;
		string->p[nowlength + 1] = '\0';
		printf("4=%s\n", string->p);

	}




}


void insertstring(mystring* string, char* ch, char* pos) 
{
	if (pos == NULL || string == NULL)
	{
		return;
	}
	int nowstringlength = mystrlen(string->p);//��ȡ��ǰ����
	int addstringlength = mystrlen(ch);//Ҫ���ӵĳ���

	if ((nowstringlength + addstringlength + 1) >= string->reallength)
	{
		int needaddlength = nowstringlength + addstringlength + 1 - string->reallength;
	
		//string->p= (char*)realloc((string->p), (string->reallength + needaddlength));
		//string->reallength += needaddlength;//���ӳ���
		int  nowlength = mystrlen(string->p);
		int movelength = mystrlen(pos);//Ҫ�ƶ��ĳ���
		int insertlength = mystrlen(ch);
		printf("1=%s\n", string->p);

		for (int i = nowlength; i >= nowlength - movelength; i--)
		{
			string->p[i + insertlength] = string->p[i];//�ַ��ƶ�
		}

		printf("1=%s\n", string->p);
		for (int j = 0; j < insertlength; j++)
		{
			string->p[nowlength - movelength+j] = ch[j]; //�������� 
		}
		printf("1=%s\n", string->p);



	}
	else
	{
		int  nowlength = mystrlen(string->p);
		int movelength = mystrlen(pos);//Ҫ�ƶ��ĳ���
		int insertlength = mystrlen(ch);
		printf("1=%s\n", string->p);

		for (int i = nowlength; i > nowlength - movelength; i--)
		{
			string->p[i + insertlength] = string->p[i];
		}
		printf("1=%s\n", string->p);

		for (int j = 0; j < insertlength; j++)
		{
			string->p[nowlength - movelength] = ch[j]; //�������� 
		}

		printf("1=%s\n", string->p);



	}




}

void changefirstchar(mystring* string, char oldchar, char newchar)
{
	char* pres = string->p;
	while (*pres != '\0')
	{
		if (*pres == oldchar)
		{
			*pres = newchar;
			return;

		}
		pres++;
	}

}


void changefirststring(mystring* string, char* oldstring, char* newstring)
{
	char* pres = string->p;
	char* p = findstring(pres, oldstring);
	while (p !=NULL )
	{
		deletefirststring(string, oldstring);

		

		insertstring(pres, newstring, p);




		
	}





}