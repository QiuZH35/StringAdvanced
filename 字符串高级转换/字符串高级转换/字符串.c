
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


void main1()
{

	double data = -12345.6789;

	int decimal;  //������λ��
	int sign;  //1��������0��������
	int  precision = 11;  //�����ַ��Ŀ�ȣ����С��ʵ�ʿ�Ƚ�ȡ����ȴ���ʵ�ʿ�Ⱥ��油0

	char* buffer;
	buffer = _ecvt(data, precision, &decimal, &sign);   //ʵ��ת��Ϊ�ַ���


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

	_gcvt(value, 5, buffer);//ʵ��ת��Ϊ�ַ��� �� 5 ��ʾλ��

	printf("%s", buffer);



	system("pause");
}

void main()
{
	//unsigned int value = 32;
	//char str[20];
	//
	//_ultoa(value,str, 16);  //����ת��
	//printf("%s\n", str);

	//_ultoa(value, str,2);
	//printf("%s\n", str);

	//_ultoa(value, str, 8);
	//printf("%s\n", str);


	
	int value = 32;
	char str[20];

	_ltoa(value, str, 16);  //����ת�����޷�������
	printf("%s\n", str);

	_ltoa(value, str, 2);
	printf("%s\n", str);

	_ltoa(value, str, 8);
	printf("%s\n", str);


	system("pause");
}