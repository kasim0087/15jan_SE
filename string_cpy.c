#include<stdio.h>
#include<string.h>
int main()
{
	char inputstring[100],copystring[100];
	printf("enter the  value");
	gets(inputstring);
	strcpy(copystring,inputstring);
	printf("the input string is %s \n",inputstring);
	printf("the copied string is %s",copystring);
	return 0;
}
