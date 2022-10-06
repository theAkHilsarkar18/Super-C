
#include<stdio.h>
main()
{
    // check string is palingdrom or not.

    char a[100],b[100];
    
    printf("enter string A : ");
    gets(a);

    
    
    int i,j=0,len=0,count=0;

    for ( i = 0; a[i] != '\0'; i++)
    {
        len ++;
    }


    for ( i = len-1; i >=0; i--)
    {
        b[j]=a[i];
        j++;
    }


    // for ( i = 0; i < len; i++)
    // {
    //     printf("%c",b[i]);
        
    // }

   
    for ( i = 0; i < len; i++)
    {
        if (a[i]!=b[i])
        {
            count =1;
            break;
        }
        
    }

    if (count == 1)
    {
        printf("\nstring is not palingdrom");
    }
    else
    {
        printf("\nstring is palingdrom");
    }
    
    

    


}
