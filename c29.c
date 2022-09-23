
#include<stdio.h>
int main()
{
    int a;
    printf("enter unit value : ");
    scanf("%d",&a);

    float b,total,add;
    if (a<=50)
    {
        b=50*0.5;
        add=b*0.2;
        total=+b+add;
        printf("\nYour electricity bill is : \n unit = %d\n charge per unit = 0.5\n bill = %f\n gst = %f\n bill with gst = %f",a,b,add,total);
    }
    else if (a<=100)
    {
        b=50*0.75;
        add=b*0.2;
        total=+b+add;
        printf("\nYour electricity bill is : \n unit = %d\n charge per unit = 0.75\n bill = %f\n gst = %f\n bill with gst = %f",a,b,add,total);
    }
    else if (a<=200)
    {
        b=50*1.20;
        add=b*0.2;
        total=+b+add;
        printf("\nYour electricity bill is : \n unit = %d\n charge per unit = 1.20\n bill = %f\n gst = %f\n bill with gst = %f",a,b,add,total);
    }
    else if (a<=250)
    {
        b=50*1.50;
        add=b*0.2;
        total=+b+add;
        printf("\nYour electricity bill is : \n unit = %d\n charge per unit = 1.50\n bill = %f\n gst = %f\n bill with gst = %f",a,b,add,total);
    }
    
    
    



   

}