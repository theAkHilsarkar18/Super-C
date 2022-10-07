
#include <stdio.h>
void add();
int multi();
int sub(int a, int b);
void div(int a, int b);

void main()
{
    add();
    multi();
    int a = sub(20, 10);
    printf("substraction is : %d\n", a);
    div(20, 10);
}

// user define function

void add()
{
    int x = 10, y = 20;
    printf("addition is : %d\n", x + y);
}

int sub(int a, int b)
{
    return a + b;
}

int multi()
{
    int x = 10, y = 20;
    printf("multiplication is : %d\n", x * y);
    return x * y;
}

void div(int a, int b)
{
    printf("division is : %d\n", a / b);
}