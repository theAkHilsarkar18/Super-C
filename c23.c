#include <stdio.h>
int main()
{

    int a, b;

    printf("Enter value of a and b : ");
    scanf("%d%d", &a, &b);

    if (a < b)
    {
        printf("A is minimum to b");
    }
    else
    {
        printf("B is minimum to A");
    }
}