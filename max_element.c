#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n;
    printf("Enter Number of Elementrs in The Array: \n");
    scanf("%d",&n);
    int arr[n];
    for(int i = 0; i<n; i++){
        printf("Enter element number %d: \n",i+1);
        scanf("%d",&arr[i]);
    }
    int max = arr[0];
    for(int i = 0; i<n; i++){
        if (arr[i]>max){
            max = arr[i];
        }
    }
    printf("Largest element in the array is: %d",max);
    return 0;
}
/*
int size = sizeof(arr)/sizeof(arr[0]);
*/