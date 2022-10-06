
#include<stdio.h>
#include<string.h>
main()
{
    // remove space and blanks from string.

    char a[100];
    printf("enetr a string : ");
    gets(a);
    puts(a);

    int i ,j,len;
    len = strlen(a);
   // printf("%d",len);

    for ( i = 0; i < len; i++)
    {
        if (a[i]==' ')
        {
            a[i]=a[i+1];
            i++;
        }
        printf("%c",a[i]);
        
    }
    


}