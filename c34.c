#include<stdio.h>
main()
{
    int n;
    printf("enter value of n : ");
    scanf("%d",&n);

    int i=0;
    do{
        printf("%d\n",i);
        i++;
    }while(i<=n);

    printf("\n\n");

    int j=0;
    while(j<=n){
        printf("%d\n",j);
        j++;
    }

}