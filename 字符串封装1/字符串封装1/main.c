
#define _CRT_SECURE_NO_WARNINGS
#include "×Ö·û´®.h"


void main()
{

	mystring string1;
	initwithstring(&string1,"mspaint,note");
	
	//printfstring(&string1);
	//backaddchar(&string1, 'd');
	backaddstring(&string1, "pad");
	//printfstring(&string1);
	//run(&string1);

	/*char str[20] = "note";
	mystrcat(str, "pad");
	printf("%s", str);*/

	/*char* strp = findfirstch(&string1, 'a');
	*strp = 'A';*/

	/*char* press = findstring(&string1, "msa");
	if (press != NULL)
	{
		*press = 'x';
	}*/

	//deletefirstchar(&string1, 'm');
	//deletefirststring(&string1, "ms");

	/*char* strp = findfirstch(&string1, 'a');
	if (strp != NULL)
	{

		insertstring(&string1, "123456", strp);

	}*/

	//changefirstchar(&string1, 'n', 'M');

	changefirststring(&string1, "mspaint", "12345678");
	printfstring(&string1);


	system("pause");
}