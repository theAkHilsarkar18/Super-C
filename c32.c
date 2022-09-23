#include<stdio.h>
main()
{
    printf("\n\nenter date of septamber month : ");
    int a;
    scanf("%d",&a);

   

   switch(a%7)
    {
        case 0:
        printf("Wednesday");
        break;

        case 1:
        printf("Thursday");
        break;

        case 2:
        printf("Friday");
        break;

        case 3:
        printf("Saturday");
        break;

        case 6:
        printf("Tuesday");
        break;

        case 5:
        printf("Monday");
        break;

        case 4:
        printf("Sunday");
        break;


    }
    

 

printf("\n\n");
}
