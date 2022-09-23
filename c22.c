
#include <stdio.h>
int main()
{

    int s1, s2, s3, s4, s5, s6, s7;
    float per;

    printf("\n\nEnter your all subject marks : \n\n");

    printf("English : ");
    scanf("%d", &s1);

    printf("Maths : ");
    scanf("%d", &s2);

    printf("Chemestry : ");
    scanf("%d", &s3);

    printf("Physics : ");
    scanf("%d", &s4);

    printf("Science : ");
    scanf("%d", &s5);

    printf("Hindi : ");
    scanf("%d", &s6);

    printf("Gujrati : ");
    scanf("%d", &s7);

    int total = s1 + s2 + s3 + s4 + s5 + s6 + s7;
    printf("\n\nTotal marks : %d\n", total);

    per = total / 7;
    printf("Your percentage is : %4.2f\n", per);

    if (per > 90)
    {
        printf("Your grade is A1");
    }
    if (per > 80 && per < 90)
    {
        printf("Your grade is A");
    }
    if (per > 70 && per < 80)
    {
        printf("Your grade is B");
    }

    if (per > 60 && per < 70)
    {
        printf("Your grade is c");
    }
    if (per > 50 && per < 60)
    {
        printf("Your grade is D");
    }
    if (per > 40 && per < 50)

    {
        printf("You grade is e");
    }
    if (per < 40)

    {
        printf("You are failed");
    }

    {
    }

    printf("\n\n");
}