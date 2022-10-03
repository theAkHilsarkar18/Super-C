
#include<stdio.h>
main()
{
    //Write C program to find minimum and maximum element in array[1D].

     int n;
    printf("enter length of array : ");
    scanf("%d",&n);

    int a[100];
    printf("enter value of array : ");
    int i;
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }

    printf("\n==================================================================\n");

// 1 , 2 , 3 , 4 , -2

    int max = a[0]; // max = a[0] = 1
    int min = a[0]; // min = a[0] = 1
    
    
    for(i=1; i<n; i++)
    {
        if(a[i]>max) // 1. 2>1 
        {
            max = a[i]; // 1. max = 2
        }
        else if(a[i]<min) // 1. 2<1 ! // 5. -2<1
        {
            min = a[i]; // min = -2
        }

    }

    printf("maximum number is : %d/n",max);
    printf("minimum number is : %d",min);



}