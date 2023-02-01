#include<stdio.h>
int main()
{
	int p,r,n;
	float si,ci;
	printf("enter the values of p,r and n");
	scanf("%d%d%d",&p,&r,&n);
	si=(p*r*n)/100;
	ci=p*pow((1+r/100),n);
	printf("the simple interest is %f",si);
	printf("the compound interest is %f",ci);
	return 0;
}
