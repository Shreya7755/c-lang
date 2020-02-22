#include<stdio.h>
#include<math.h>
int main()
{
	for(int num=2;num<=300;num++)
	{
		for(int i=2;i<=300;i++)
		{
			if(num==i)
			{
				continue;
			}
			if(num%i==0)
			{
				break;
			}
			if((num%i!=0)&&(i==300))
			{
				printf("%d\n",num);
			}
		}
	}
}