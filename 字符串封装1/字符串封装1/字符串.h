#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <memory.h>

typedef struct
{
	char* p;//�����ַ����׵�ַ

	int reallength;//ʵ�ʳ���


}mystring;


//�ַ�������ʼ������ӡ�����ӣ��ַ����ַ�������ɾ�����ַ����ַ����� 
//�޸ģ��滻
//β�������ַ����ַ���
//����λ�������ַ����ַ���


void init(mystring *string);   //ԭ�ⲻ����ʼ��
void initwithlength(mystring* string,int length);//���ٳ��ȣ��ڴ�����
void initwithstring(mystring*string,char *copystring); //��ʼ��������
void printfstring(mystring *string);

void backaddchar(mystring* string, char ch);
void backaddstring(mystring* string, char* str);
void run(mystring* string);
//char* mystrcat(char* dest, const char* source);

char* findfirstch(mystring* string, char ch);
char* findstring(mystring* string, char* str);

int deletefirstchar(mystring* string, char ch);
int deletefirststring(mystring* string, char *ch);

void insertchar(mystring* string, char ch, char* pos);
void insertstring(mystring* string, char *ch, char* pos);

void changefirstchar(mystring* string, char oldchar, char newchar);
void changefirststring(mystring* string, char* oldstring, char* newstring);