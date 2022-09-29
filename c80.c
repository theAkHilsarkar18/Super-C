
//         5
//       4 4
//     3 3 3
//   2 2 2 2
// 1 1 1 1 1

#include<stdio.h>
main()
{
	int i,j,k;
	
	for(int i=5; i>=1; i--)
    {
        for(int k=i; k>=1; k--)
        {
            printf(" ");
        }
            for(int j=5; j>=i; j--)
            {
                 printf("%d",i);
            }
            printf("\n");
        
    }
	
}