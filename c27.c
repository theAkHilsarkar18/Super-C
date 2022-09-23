#include<stdio.h>
main()
{
    int a,b,c,d;
    printf("\n\n");
    printf("Enter value of a , b , c , d : ");
    scanf("%d%d%d%d",&a,&b,&c,&d);

    if (a>b)
    {
        if (a>c)
        {
            if (a>d)
            {
                printf("a is big");
            }
            else
            {
                printf("d is big");
            }
            
        }
        else
        {
            if (c>d)
            {
                printf("c is big");
            }
            else
            {
                printf("d is big");
            }
            
        }
        
    }
    else
    {
        if (b>c)
        {
            if (b>d)
            {
                printf("b is big");
            }
            else 
            {
                printf("d is big");
            }
            
        }
        else
        {
            if (c>d)
            {
                printf("c is big");
            }
            else
            {
                printf("d is big");
            }
        }
        
    }
    

    
}