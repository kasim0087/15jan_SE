#include<stdio.h>
int fab(int);
int main()
{
	int num,result;
	printf("enter the value");
	scanf("%d",&num);
	result=fab(num);
}
int fab(int num)
{
	int a=0,b=1,c=0,i;
	for(i=0;i<=num;i++)
	{
		printf("the fib is %d \n",c);
		a=b;
		b=c;
		c=a+b;
	}
	return c;
}

