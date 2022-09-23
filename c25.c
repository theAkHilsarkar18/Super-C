#include<stdio.h>
int main()
{
    char a;
    
    printf("\n\n");
    printf("Enter any character : ");
    scanf("%c",&a);

    if (a=='a' || a<='z')
    {
        /* code */
        printf("\n\n");
        printf("Your entered character = %c is small alphabat",a);
        printf("\n\n");
        
    }
   
    else if (a=='A' || a<='Z')
    {
        /* code */
        printf("\n\n");
        printf("Your entered character = %c is capital alphabat",a);
        printf("\n\n");
    }
    else if (a=='1' || a<='9')
    {
        /* code */
        printf("\n\n");
        printf("Your entered character = %c is Digit",a);
        printf("\n\n");
    }
    
    
    

}