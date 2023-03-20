#include<stdio.h>
int main()
{
	int a[23],i,n,key;
	printf("enter the values ");
	scanf("%d",&n);
	printf("enter elements in array");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the number to find");
	scanf("%d",&key);
	for(i=0;i<n;i++)
	{
		if(a[i]==key)
		{
			printf("the number is found");
			return 0;
		}
		
	}
	printf("the number is not found");
}
