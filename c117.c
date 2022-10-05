
#include<stdio.h>
#include<string.h>

main()
{
    // write c program to check frekuncy of each character in string.
    int i,j, count=0,n;
    char a[100];
    printf("enter a string : ");
    scanf("%s",&a);

    n= strlen(a);


    /*
                H E L  O
                0 1 2 3 4

    */

    
    for ( i = 0; i<n; i++)
    {
        count = 1;
        for ( j = i+1; j <n; j++)
        {
            
            if (a[i] == a[j])
            {

                count = count + 1;     
                a[j]='\0';
                break;

            }
             
        }

        if(a[i]!= '\0')
        {
            printf("frequency of %c = %d\n",a[i],count);
        }
            
    }



}