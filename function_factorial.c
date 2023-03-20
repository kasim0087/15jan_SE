/*#include<stdio.h>
int fac(int,int,int);
int main()
{
	int ans=1,i,num;
	printf("enter the value");
	scanf("%d",&num);
	fac(ans,i,num);
}
int fac(int ans,int i,int num)
{
	for(i=1;i<=num;i++)
	{
		ans=ans*i;
	}
	printf("the factorial is %d",ans);
}
*/
#include<stdio.h>
int fac(int);
int main()
{
	int num,result;
	printf("enter the value");
	scanf("%d",&num);
	result=fac(num);
}
int fac(int num)
{
	int f=1,i;
	for(i=1;i<=num;i++)
	{
		f=f*i;
	}
	printf("factorial is %d",f);
	
	return f;
}
