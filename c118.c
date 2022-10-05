
#include<stdio.h>
main()
{
    
                                //     under construction
    
  
    
    
    // check string is palingdrom or not.

    char a[100];
    
    printf("enter string A : ");
    gets(a);

    char b[100]=a;
    
    int i,j=0,len=0;

    for ( i = 0; a[i] != '\0'; i++)
    {
        len ++;
    }
    //printf("%d",len);

    for ( i = len; i >=0; i--)
    {
        
        printf("%c",a[i]);

    }

    printf("\n%c",a[0]);
    printf("\n%c",b[0]);
   
    
    


}
