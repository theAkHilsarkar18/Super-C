#include<stdio.h>
main()
{
    printf("want you attend call ?? enter 1 if yes enter 2 if no\n");
    
    int a;
    scanf("%d",&a);

    
    

    switch (a)
    {
        case 1:
            printf("\nThank you for attend this call\n");

                int b;
                printf("enter 1 if you want ot talk in gujrati\n");
                scanf("%d",&b);

                switch(b){

                    case 1 :
                        printf("enter 1 for recharge\n");
                        printf("enter 2 for complain\n");
                        printf("enter 3 for to drop call\n");

                        scanf("%d",&b);

                        switch(b)
                        {
                            case 1: 
                            printf("your recharge completed\n");
                            break;

                            case 2:
                            printf("we recieved your complain");
                            break;

                            case 3: 
                            printf("thank you");
                            break;
                        }

                

                        break;

                    default:
                        printf("enter valid number\n");
                        break;    

                }


            break;

            case 2:
            printf("Call droped\n");
            break;

    default:
        printf("enter valid number\n");
        break;
    }
}