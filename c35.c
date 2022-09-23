#include<stdio.h>
main()
{
    char a = 'a';
    
    do{
        printf("%c\n",a);
        a++;
    }while(a<='z');

    printf("\n\n");
    
    char A = 'A';
    while(A<='Z'){
        printf("%c\n",A);
        A++;
    }
}