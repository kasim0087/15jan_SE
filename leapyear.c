#include<stdio.h>
int main()
{
	int year;
	printf("please enter the year");
	scanf("%d",&year);
	if(year%4==0)
	{
		printf("it is leap year");
	}
	else
	{
		printf("it is not leap year");
	}
	
	return 0;
}
