#include <stdio.h>
#define MAX 10

int main()
{
    int mat1[MAX][MAX], mat2[MAX][MAX], mat3[MAX][MAX], rows, columns;
    printf("Enter number of rows: ");
    scanf("%d",&rows);
    printf("Enter number of columns: ");
    scanf("%d",&columns);
    //For Matrix 1
    for(int i = 0; i< rows; i++){
        for (int j = 0; j < columns; j++)
        {
            printf("Enter Element At [%d][%d] position : ",i+1,j+1);
            scanf("%d",&mat1[i][j]);
        }
    }
    //For Matrix 2
    for(int i = 0; i< rows; i++){
        for (int j = 0; j < columns; j++)
        {
            printf("Enter Element At [%d][%d] position : ",i+1,j+1);
            scanf("%d",&mat2[i][j]);
        }
    }
    //Addition of matrix 1 and matrix 2
    printf("Addition of matrices -->\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            mat3[i][j] = mat1[i][j] + mat2[i][j];
            printf("\t%d",mat3[i][j]);
            
        }
      printf("\n");  
    }
    
    return 0;
}