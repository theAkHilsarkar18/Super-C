#include<stdio.h>
main()
{
     // total digit in number :

     int a;
     printf("enter a value : ");
     scanf("%d",&a);

     int i=1;
     while (a>10)
     {
          a = a/10;
          i++;
     }
     printf("number of digit : %d",i);
     
}
