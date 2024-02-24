#include <stdio.h>
#define MAX 10
int main()
{
    int mat[MAX][MAX],rows,columns;
    printf("Enter Number of Rows: ");
    scanf("%d",&rows);
    printf("Enter Number of Columns: ");
    scanf("%d",&columns);
    for(int i = 0; i< rows; i++){
        for (int j = 0; j < columns; j++)
        {
            printf("Enter Element At [%d][%d] position : ",i+1,j+1);
            scanf("%d",&mat[i][j]);
        }
    }
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            printf("%6d",mat[i][j]);
        }
       printf("\n");
    }
    
    return 0;
}