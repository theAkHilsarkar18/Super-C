
#include<stdio.h>
#include<string.h>
main()
{

    // remove all  repeated character
    char a[100],b[100];
    printf("enetr a string : ");
    gets(a);
   // puts(a);

    int i ,j,len;
    len = strlen(a);
   // printf("%d",len);

    for ( i = 0; i < len; i++)
    {
       b[i]=a[i];
    }

    //  for ( i = 0; i < len; i++)
    // {
    //    printf("%c",b[i]);
    // }

      for ( i = 0; i<len; i++)
    {
       
        for ( j = i+1; j <len; j++)
        {
            
            if (a[i] == a[j])
            {    
                a[j]='\0';
                a[i]='\0';
                break;

            }
             
        }
            printf("%c",a[i]);


    }

}