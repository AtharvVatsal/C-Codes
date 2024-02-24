#include <stdio.h>

int Factorial(int number){
    if (number < 0) //failsafe (does not work, looking into it)
    {
        printf("No factorial for negative numbers\n");
        return -1;
    } else{
        if (number == 0 || number == 1)
        {
            return 1;
        } else {
            return number * Factorial(number - 1);
        }
    }
    
}
int main()
{
    int n;
    printf("Enter The Number: ");
    scanf("%d", &n);
    int fac = Factorial(n);
    if (fac != -1)
    {
        printf("Factorial of %d is %d", n, fac);
    }
    return 0;
}