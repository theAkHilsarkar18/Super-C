
// 1 0 1 0 1
//   0 1 0 1
//     1 0 1
//       0 1
//         1

#include<stdio.h>
main()
{

    for(int i=1; i<=5; i++)
    {
        for(int k=1; k<=i; k++)
        {
            printf(" ");
        }

        for(int j=i; j<=5; j++)
        {
            if(j%2==0)
            {
                printf("0");
            }
            else
            {
                printf("1");
            }
            
        }
        printf("\n");
    }

}