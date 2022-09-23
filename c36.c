#include<stdio.h>
main()
{
    int i=1;
    int a = 0;

    do{
        a=i+a; 
        i++;
    }while(i<=10);

    printf("%d",a);
}
/*
        1. i=1 , a=0 , a = i+a , a = 1+0 = 1 , i++ 
        2. i=2 , a=1 , a = i+a , a = 2+1 = 3 , i++
        3. i=3 , a=3 , a = i+a , a = 3+3 = 6 , i++
        3. i=4 , a=6 , a = i+a , a = 4+6 = 20 , i++
*/