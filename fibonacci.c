#include<stdio.h>
int main()
{
	int a,b,c,i,fib;
	printf("enter num to prints it fib");
	scanf("%d",&fib);
	a=0;
	b=1;
	c=0;
	for(i=0;i<=fib;i++)
	{
		printf("%d",c);
		a=b;
		b=c;
		c=a+b;
	}
	
	return 0;
}
