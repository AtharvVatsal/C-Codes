#include <stdio.h>
/* Without recursion
int main()
{
    int a = 0;
    int b = 1;
    int c, number;
    printf("Enter the number of elements: ");
    scanf("%d", &number);
    printf("Fibonacci Series: ");
    printf("%d %d ", a, b);
    for (int i = 2; i < number; i++)
    {
        c = a + b;
        a = b;
        b = c;
        printf(" %d " ,c);
    }
    
    return 0;
} */

/*With Recursion
void fib(int n){
    static int a = 0; //static becaiuse we want to keep the value of a and b change acoordingly
    static int b = 1;
    static int c;
    if (n > 0)
    {
        c = a + b;
        a = b;
        b = c;
        printf(" %d ", c);
        fib(n-1);
    }
}

int main() {
    printf("Enter the number of elements: ");
    int n;
    scanf("%d", &n);
    printf("Fibonacci Series: ");
    printf("0 1 ");
    fib(n-2);
    return 0;
}*/

/*Prime Number

void prime(int n) {
    if ( n == 1 || n == 0)
    {
        printf("Not Prime\n");
    }
    if (n == 2){
        printf("Prime\n");
    }
    if( n > 2){
        for(int i = 2; i * i <= n; i++){ //sqrt tech to save time
            if(n % i == 0){
                printf("Not Prime\n");
                return;
            }
            else{
                printf("Prime\n");
                return;
            }
        }
    }
}
int main() {
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    prime(n);
    return 0;
}
*/
/*Palindrome
int main() {
    int number;
    printf("Enter the number: ");
    scanf("%d", &number);
    int temp = number;
    int reversed = 0;
    int remainder;
    while (number!=0)
    {
        remainder = number % 10;
        reversed = reversed * 10 + remainder;
        number = number / 10;
    }
    if (temp == reversed)
    {
        printf("Palindrome\n");
    }
    else
    {
        printf("Not Palindrome\n");
    }
    return 0;
} */