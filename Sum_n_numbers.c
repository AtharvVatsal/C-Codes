#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int number;
    int sum = 0;
    printf("Enter The Last Summation Number : ");
    scanf("%d",&number);
    printf("\n");
    for(int i = 1; i<=number; i++){
        sum += i;
    }
    printf("Sum = %d", sum);
    return 0;
}
