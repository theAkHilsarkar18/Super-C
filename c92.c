
//         1
//       0 0
//     1 1 1
//   0 0 0 0
// 1 1 1 1 1

#include<stdio.h>
main()
{

    for(int i=1; i<=5; i++)
    {
        for(int k=5; k>=i; k--)
        {
            printf(" ");
        }

        for(int j=1; j<=i; j++)
        {
            if(i%2==0)
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