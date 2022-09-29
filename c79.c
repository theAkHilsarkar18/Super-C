
//         1
//       2 2
//     3 3 3
//   4 4 4 4
// 5 5 5 5 5

#include<stdio.h>
main()
{
	int i,j,k;
	
	for(int i=1; i<=5; i++)
    {
        for(int k=5; k>=i; k--)
        {
            printf(" ");
        }
            for(int j=1; j<=i; j++)
            {
                 printf("%d",i);
            }
            printf("\n");
        
    }
	
}