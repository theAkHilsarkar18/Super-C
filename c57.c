// 5
// 4 5
// 3 4 5
// 2 3 4 5
// 1 2 3 4 5

#include<stdio.h>
main()

{

    for(int i=5; i>=1; i--)
    {
        for(int j=i; j<=5; j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }

}