// Write C program to enter a number and print its reverse & check weather num is palindrome or not?

#include<stdio.h>
int main()
{
    int a;
    printf("enter a number : ");
    scanf("%d",&a);

    int c = a;
    
    int sum = 0 , b;

    while(a>0)
    {
        
        b = a%10;
        sum = (sum*10)+b;
        a = a/10;
    }

    //printf("\n%d",sum);

    if(c==sum)
    {
        printf("number is pelingdrom");
    }
    else
    {
        printf("not pelingdrom");
    }
  
   
