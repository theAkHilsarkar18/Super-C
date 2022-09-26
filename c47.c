// Write C program to enter a number and print its reverse & check weather num is palindrome or not?

// UNDER CONSTRUCTION

#include<stdio.h>
main()
{
    int a;
    printf("enter a number : ");
    scanf("%d",&a);

    int b = a;

    int i;
    for(i=0; a>0; i++)
    {
        a = a/10;
    }
    printf("total digit of number is : %d\n",i);
    
  
    
    int d = 1;

    for(int e=1; e<i; e++)
    {
        
        d = d*10;
        printf("d = %d\n",d);
    }

    int last = b % 10;
    int s1 = last * d;
   // printf("%d",s1);

   

  

    




}