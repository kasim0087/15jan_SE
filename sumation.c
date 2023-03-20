#include<stdio.h>
int main()
{
	int num,sum,rem;
	printf("enter the number");
	scanf("%d",&num);
	while(num!=0)
	{
		rem=num%10;
		sum=sum+rem;
		num=num/10;
	}
	printf("\nthe summation of number is %d",sum);
	return 0;
}
