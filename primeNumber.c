#include <stdio.h>
/*
This is a basic program and requires fine tuning to make it memory and time efficient, will work on an updated on.
*/
int main()
{
    int n, count;
    printf("Enter Number: ");
    scanf("%d",&n);
    for(int i = 1; i<=n; i++){
        if(n%i == 0){
            count ++;
        }
    }
    if (count == 2){
        printf("%d is a prime number!\n",n);
    } else{
        printf("%d is not a prime number!\n",n);
    }
    return 0;
}