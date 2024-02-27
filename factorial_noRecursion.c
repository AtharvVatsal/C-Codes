#include <stdio.h>
//no recursive function used
int main()
{
    long long n, fac = 1;
    printf("Enter the number: ");
    scanf("%lld", &n);
    if (n < 0)
    {
        printf("-ve Numbers Don't Have Factorial");
    } else if (n == 0 || n == 1)
    {
        printf("Factorial of %lld is 1", n);
    } else{
        for (int i = n; i >= 1; i--)
        {
            fac *= i;
        }
        printf("Factorial of %lld : %lld", n, fac);
    }
    
    return 0;
}
