#include <stdio.h> 
int main() 
{ 
    int a=5,b=5,c=7;
  
  
    printf("Enter three numbers: %d %d %d",a,b,c); 
    if (a == b) { 
        if (a == c) 
            printf("\n%d is the equal number.", a); 
        else
            printf("\n%d is the equal number.", c); 
    } 
    else { 
        if (b == c) 
            printf("\n%d is the equal to.", b); 
        else
            printf("\n%d is the equal to.", c); 
    } 
    if (a > b) { 
        if (a > c) 
            printf("\n%d is the largest number.", a); 
        else
            printf("\n%d is the largest number.", c); 
    } 
    else { 
        if (b > c) 
            printf("\n%d is the largest number.", b); 
        else
            printf("\n%d is the largest number.", c); 
    } 
    if (a < b) { 
        if (a < c) 
            printf("\n%d is the smallest number.", a); 
        else
            printf("\n%d is the smallest number.", c); 
    } 
    else { 
        if (b < c) 
            printf("\n%d is the smallest number.", b); 
        else
            printf("\n%d is the smallest number.", c); 
    } 
    return 0; 
} 
