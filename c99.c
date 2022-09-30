// 1
// 1 2
// 1 2 3
// 1 2 3 4
// 1 2 3 4 5
// 1 2 3 4
// 1 2 3
// 1 2
// 1

#include<stdio.h>
main()
{
    for(int i=1; i<=5; i++)
    {
        for(int j=1; j<=i; j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }

    for(int k=4; k>=1; k--)
    {
        for(int l=1; l<=k; l++)
        {
            printf("%d",l);

        }
        printf("\n");
    }
}