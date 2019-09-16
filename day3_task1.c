#include<stdio.h>
int func(int a, int b)
{
	int sum;
	sum=a+b;
	printf("%d",sum);
}
void main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	int sum=func(a,b);
	
}
