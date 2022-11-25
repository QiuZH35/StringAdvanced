#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <memory.h>

typedef struct
{
	char* p;//保存字符串首地址

	int reallength;//实际长度


}mystring;


//字符串，初始化，打印，增加（字符，字符串），删除（字符，字符串） 
//修改，替换
//尾部插入字符，字符串
//任意位置增加字符，字符串


void init(mystring *string);   //原封不动初始化
void initwithlength(mystring* string,int length);//开辟长度，内存清零
void initwithstring(mystring*string,char *copystring); //初始化并拷贝
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