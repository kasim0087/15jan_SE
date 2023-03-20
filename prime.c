#include<stdio.h>
int main()
{
	int num,i,c=0;
	printf("enter the number to find it is prime or not");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		if(num%i==0)
		{
			c++;
		}
	}
	if(c==2)
	{
		printf("%d is prime number",num);
	}
	else
	{
		printf("%d is not a prime number",num);
	}
	return 0;
}
