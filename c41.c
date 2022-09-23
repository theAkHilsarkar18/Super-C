#include<stdio.h>  
 main()
 { 

    int a;
    printf("enter a number : ");
    scanf("%d",&a);

    int b = a/2;
    int c = 0;
    
    int i = 2;
    while(i<=b)
    {
        if(a%i==0)
        {
            printf("this number is not prime !");
            c = 1; // for ignore other condition
            break; // to break loop
            
        }
        i++;
    }
    
    if(c==0)
    {
        printf("this number is prime : ");
    }
  
 }    