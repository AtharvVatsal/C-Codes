#include <stdio.h>
#include <math.h>
/*
k1 x k2 = n
(k2 = n/k1)

if k1 <= sqrt(n)
Then k2 >= sqrt(n)
*/
int main()
{
    int n;
    int isPrime =1; //Assumes the number entered is prime 
    printf("Enter The Number: ");
    scanf("%d", &n);
    for (int i = 2; i < (int)sqrt(n); i++)
    {
        if (n%i == 0)
        {
            isPrime = 0;
        }
        if (isPrime)
        {
            printf("The Number %d is prime!\n",n);
        } else{
            printf("The Number %d is composite!",n);
        }
        
    }
    return 0;
}
/*
We get a pair of multipication is a number is prime so not to check twice root(n) is used.
*/
//Only works for numbers > 9