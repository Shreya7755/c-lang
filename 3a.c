#include<stdio.h>
int main()
{
	char gender,married_stat;
	int age;
	printf("enter the age, gender and married status\n");
	scanf("%d %c %c", &age,gender,married_stat);
	if(married_stat=='M')
	{
		printf("The Driver is Ensured\n");
	}
	else
	{
		printf("The Driver is not ensured\n");
	}
	if(gender=='m' && age>30)
	{
		printf("The Driver is Ensured\n");
	}
	else
	{
		printf("The Driver is not ensured\n");
	}
	if(married_stat=='S' && gender=='F' && age>25)
	{
		printf("The Driver is Ensured\n");
	}
	else
	{
		printf("The Driver is not Ensured\n");
	}

}
