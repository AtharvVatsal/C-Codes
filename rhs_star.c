#include <stdio.h>
/*
For n=5 ->

*
**
***     This Is A Right Angled Start Triangle Pattern(Left sided)
****
*****

*/
int main()
{
    int n;
    printf("Enter Number of rows & columns: ");
    scanf("%d", &n);
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
