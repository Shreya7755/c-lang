#include<stdio.h>
struct sum
{
	int a;
	int b;
	int add;
};
struct sum input()
{
	struct sum q;
	printf("enter the value of a and b\n");
	scanf("%d %d",&q.a,&q.b);
	return q;
}
struct sum addition(struct sum k)
{
	k.add=k.a+k.b;
	return k;
}
void output(struct sum k)
{
	printf("%d\n",k.add);
}
void main()
{	
	struct sum q,k;
	q = input();
	k = addition(q);
	output(k);
}
