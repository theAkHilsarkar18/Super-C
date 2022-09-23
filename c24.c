#include <stdio.h>
int main()
{
    int a;
    printf("Enter a number : ");
    scanf("%d", &a);

    if (a == 0)
    {
        printf("A=%d is neutral", a);
    }
    else
    {
        printf("A=%d is not neutral", a);
    }
}