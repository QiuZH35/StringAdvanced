
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


void main1()
{

	double data = -12345.6789;

	int decimal;  //整数的位数
	int sign;  //1代表负数，0代表正数
	int  precision = 11;  //代表字符的宽度，宽度小于实际宽度截取，宽度大于实际宽度后面补0

	char* buffer;
	buffer = _ecvt(data, precision, &decimal, &sign);   //实数转化为字符串


	printf("buffer=%s\n", buffer);
	printf("sign=%d\n", sign);
	printf("decimal=%d\n", decimal);
	printf("precision=%d\n", precision);






	system("pause");
}

void main2()
{
	char buffer[128];
	double value = 12.345678;

	_gcvt(value, 5, buffer);//实数转化为字符串 ， 5 表示位数

	printf("%s", buffer);



	system("pause");
}

void main()
{
	//unsigned int value = 32;
	//char str[20];
	//
	//_ultoa(value,str, 16);  //进制转换
	//printf("%s\n", str);

	//_ultoa(value, str,2);
	//printf("%s\n", str);

	//_ultoa(value, str, 8);
	//printf("%s\n", str);


	
	int value = 32;
	char str[20];

	_ltoa(value, str, 16);  //进制转换，无法处理负数
	printf("%s\n", str);

	_ltoa(value, str, 2);
	printf("%s\n", str);

	_ltoa(value, str, 8);
	printf("%s\n", str);


	system("pause");
}