
// 1 2 3 4 5
// 1 2 3 4
// 1 2 3
// 1 2
// 1
// 1 2
// 1 2 3
// 1 2 3 4
// 1 2 3 4 5

#include<stdio.h>
main()
{
    for(int i=5; i>=1; i--)
    {
        for(int j=1; j<=i; j++)
        {
                printf("%d",j);
        }
        printf("\n");
    }

    for(int k=2; k<=5; k++)
    {
        for(int l=1; l<=k; l++)
        {
                printf("%d",l);
        }
        printf("\n");
    }
}