#include<stdio.h>
int main()
{
	int n,remainder=0,reverse;
	printf("enter the number");
	scanf("%d",&n);
	while(n!=0)
	{
	remainder=n%10;
	reverse=reverse*10+remainder;
	n=n/10;
    }
	printf("\nreverse number is %d",reverse); 
	return 0;
}
