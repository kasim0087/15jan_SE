#include<stdio.h>
int main()
{
	int row,col,n=1,i;
	printf("enter the value of i");
	scanf("%d",&i);
	for(row=1;row<=i;row++)
	{
		for(col=1;col<=row;col++)
		{
			printf("%d",n);
			n++;
		}
		printf("\n");
	}
	return 0;
}
