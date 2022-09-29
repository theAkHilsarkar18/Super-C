
// A B C D E
//   A B C D
//     A B C
//       A B
//         A

#include<stdio.h>
main()
{
    for(char i='E'; i>='A'; i--)
    {
        for(char k=i; k<='E'; k++)
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