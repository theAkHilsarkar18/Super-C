
//         |
//       | -
//     | - |
//   | - | -
// | - | - |

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
            if(j%2==0)
            {
                printf("-");
            }
            else
            {
                printf("|");
            }
            
        }
        printf("\n");
    }

}