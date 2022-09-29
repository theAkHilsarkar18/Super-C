
//         A
//       A B
//     A B C
//   A B C D
// A B C D E

#include<stdio.h>
main()
{
    for(char i='A'; i<='E'; i++)
    {
        for(char k='E'; k>=i; k--)
        {
            printf(" ");
        }

        for(char j='A'; j<=i; j++)
        {
            printf("%c",j);
        }
        printf("\n");
    }
}