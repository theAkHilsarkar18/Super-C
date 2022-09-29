
//         A
//       B A
//     C B A
//   D C B A
// E D C B A

#include<stdio.h>
main()
{
    for(char i='A'; i<='E'; i++)
    {
        for(char k='E'; k>=i; k--)
        {
            printf(" ");
        }

        for(char j=i; j>='A'; j--)
        {
            printf("%c",j);
        }
        printf("\n");
    }
}