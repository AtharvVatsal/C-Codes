#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a, b;   //a = 10; b = 20;
    printf("Enter First Number(a): ");
    scanf("%d", &a);
    printf("Enter Second Number(b): ");
    scanf("%d", &b);
    a = a + b;  //a = (10 + 20) = 30
    b = a - b;  //b = (30 - 20) = 10, b swapped
    a = a - b;  //a = (30 - 10) = 20, a swapped
    printf("Now, Value of a = %d\nAnd value of b = %d\n", a, b);
    return 0;
}