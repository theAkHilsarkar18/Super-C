#include<stdio.h>
main()
{
     //  Write C program to find second largest number in array.[1D]
        int a[]={10,100,30,60,50};
        int max,min,i;

        if (a[0]>a[1])
        {
            max =a[0];
            min= a[1];
        }
        else{
            max =a[1];
            min= a[0];
        }

        for(i=2;i<5;i++)
        {
            if (a[i]>max)
            {
                min = max;
                max=a[i];
            }
            else if(a[i]>min){
                    min =a[i];
            }
            
        }
        
        printf("=======>>>>> %d",min);


}