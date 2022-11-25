#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>  //可变参数

void myprintf(char* pstr, ...)
{
	va_list ap; //起始点
	va_start(ap, pstr);//从ap读取pstr数据
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
				
				int data = va_arg(ap, int);  //读取下一个参数按照int转换
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