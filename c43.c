#include<stdio.h>
main()
{
    char a = 'A';

    do
    {
        printf("%c ",a);
        a++;
    }while(a<='Z');

    int b = 90;

    do
    {
        printf(" %c ",b);
        b++;
    } while (b<=122);
    
    printf("\n\n");

    for(int i = 65; i<=90; i++)
    {
        printf("%c ",i);
        
    }


}