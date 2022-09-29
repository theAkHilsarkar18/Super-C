
// A B C D E
//   B C D E
//     C D E
//       D E 
//         E

#include<stdio.h>
main()
{
    for(char i='A'; i<='E'; i++)
    {
        for(char k='A'; k<=i; k++)
        {
            printf(" ");
        }

        for(char j=i; j<='E'; j++)
        {
            printf("%c",j);
        }
        printf("\n");
    }
}