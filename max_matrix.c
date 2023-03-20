#include<stdio.h>
int main()
{
	int a[3][3],i,j,max;
	printf("enter the values ");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		scanf("%d",&a[i][j]);
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(max<a[i][j])
			max=a[i][j];
		}
	}
	printf("the maximum element in matrix is %d",max);
	return 0;
}
