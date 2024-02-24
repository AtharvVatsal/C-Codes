#include <stdio.h>

int main()
{
    int mat[3][3],n;
    for(int i = 0; i< 3; i++){
        for (int j = 0; j < 3; j++)
        {
            printf("Enter Element At [%d][%d] position : ",i+1,j+1);
            scanf("%d",&mat[i][j]);
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%6d",mat[i][j]);
        }
       printf("\n");
    }
    
    return 0;
}