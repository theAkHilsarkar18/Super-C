

#include<stdio.h>
main()
{
    //  Write C program to find second largest number in array.[1D]

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

    // for(i=0; i<n; i++)
    // {
        
    //         printf("%d\n",a[i]);
    // }



    printf("\n==================================================================\n\n");

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

   // printf("maximum number is : %d\n",max);
   // printf("minimum number is : %d\n",min);
    
    // substract element in max
    
    int s[100];

    for ( i = 0; i < n; i++)
    {
        s[i] = max - a[i];
         // printf("%d\n",s[i]);
    }

    int sl = s[0];
    int ss = s[0];

    for(i=1; i<n; i++)
    {

        if(s[i]<ss && s[i]!=0) 
        {
            ss = s[i]; 
        }

        else if(s[i]>sl && s[i]!=0) 
        {
            sl = s[i]; 
        }

    }

    // printf("\n second largest number : %d",sl);
    // printf("\n second smalest number : %d\n",ss);

    int z;
    for(i=0; i<n; i++)
    {
        if(ss==s[i])
        {
            z = i;
           //  printf("position of second largest number : %d",z);
        }
        
    }

    printf("\n\nsecond largest number : %d",a[z]);

  
    





        









}