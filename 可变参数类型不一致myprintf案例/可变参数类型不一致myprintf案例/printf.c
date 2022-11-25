#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>  //�ɱ����

void myprintf(char* pstr, ...)
{
	va_list ap; //��ʼ��
	va_start(ap, pstr);//��ap��ȡpstr����
	char flag;
	while (*pstr)
	{
		flag = *pstr;
		
		if (*pstr != '%')
		{
			putchar(flag);
			pstr++;
		}
		else
		{
			pstr++;
			flag = *pstr;
			switch (flag)
			{
			case 'd':
			{
				
				int data = va_arg(ap, int);  //��ȡ��һ����������intת��
				printf("%d", data);

				break;
			}
			case 'c':
			{
				char ch = va_arg(ap, char);
				putchar(ch);

				break;
			}
			case 's':
			{
				char* str = va_arg(ap, char*);
				printf("%s", str);

				break;
			}
			case 'f':
			{
				double db = va_arg(ap, double);
				printf("%f", db);
				break;


			}

			
			}
			pstr++;
		}
		

	}
	va_end(ap);



}



void main()
{
	myprintf("\nabcd");
	myprintf("\nabcd%d",10);
	myprintf("\nabcd%c,%d", 'A', 10);
	myprintf("\nabcd%d%s",10,"totogo");
	myprintf("\nabcd%d%s%f", 10, "totogo",1234.56);


	system("pause");
}