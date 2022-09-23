#include<stdio.h>
main()
{
    printf("which table you want to know : ");
    int table;
    scanf("%d",&table);

    int i=1;
    while(i<=10)
    {
        printf("%d * %d = %d\n",table,i,table*i);
        i++;
    }
}