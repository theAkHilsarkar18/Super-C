// Write C program to count number of digits in a number.

#include<stdio.h>
main()
{
    int a;
    printf("enter a number : ");
    scanf("%d",&a);

    int i;
    // while(a>0){
        
        
    //     a = a/10;
    // i++;

    // }
    // printf("%d",i);
    
    for(i=0; a>0; i++)
    {
        a = a/10;
    }
    printf("total digit of number is : %d",i);







}