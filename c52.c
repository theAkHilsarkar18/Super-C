
// print armstrong number 

#include<stdio.h>
main()
{
    // 153 = (1*1*1)+(5*5*5)+(3*3*3)  

    int a;
    printf("enter a number : ");
    scanf("%d",&a);

    int temp = a;

    // 1. total number of digit

    // int i;
    // for(i=1; i<a; i++)
    // {
    //     a = a/10;
    // }
    // printf("number of digit : %d\n",i);

    int sum = 0 , b;

    while(a>0)
    {
        b = a%10;
        sum = sum + (b*b*b);
        a = a/10;
    }

    //printf("sum = %d",sum);

    if(sum==temp)
    {
        printf("this number is armstrong..");
    }
    else
    {
        printf("number is not armstrong..");
    }


        
    

    






}