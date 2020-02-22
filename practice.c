#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	float a , b , c , d , root1 , root2;
	printf("enter the coefficient of the quadratic equation: \n");
 	scanf("%f %f %f",&a ,&b, &c);
 	d = ((b*b)-(4 * a * c));
 	if(d>0)
	{
		root1=(-b+(sqrt(abs(d))))/2*a;
		root2=(-b-(sqrt(abs(d))))/2*a;
		printf("root1=%f root2=%f\n",root1,root2);
	}
	else
	{
		printf("value of determinant is less than 0 or equal to 0\n");
	}
	return 0;
}
