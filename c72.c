// -
// | -
// - | -
// | - | -
// - | - | -

#include<stdio.h>
main()
{
     for(int i=1; i<=5; i++)
    {
        for(int j=i; j>=1; j--)
        {
            if(j%2==0)
            {
                printf("- ");
            }
            else
            {
                printf("| ");
            }
            
        }
        printf("\n");
    }
}