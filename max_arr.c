#include<stdio.h>
int main()
{
	int a[10],i,n,max;
	printf("enter the value of n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		max=a[0];
	}
	
	for(i=0;i<n;i++)
	{
		if(a[i]>max)
		max=a[i];
	}
	printf("the max number is %d",&max);
	return 0;
}
