#include <stdio.h>
#define ROWS 3
#define COLS 3
void inputMatrix(int matrix[][COLS], int rows, int cols);
void printMatrix(int matrix[][COLS], int rows, int cols);
int main()
{
    int matrix[ROWS][COLS];
    int i,j,sum=0;
    printf("Enter elements in %dx%d matrix.\n", ROWS, COLS);
    inputMatrix(matrix, ROWS, COLS);
    printf("Elements of %dx%d matrix.\n", ROWS, COLS);
    printMatrix(matrix, ROWS, COLS);
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
          if (i==j)
          {
            sum=sum+matrix[i][j];
          }
        }
    }
    printf("the sum of diagonal elemets is %d",sum);
    return 0;
}
void inputMatrix(int matrix[][COLS], int rows, int cols)
{
    int i, j;
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            scanf("%d", (*(matrix + i) + j));
        }
    }
}
void printMatrix(int (*matrix)[COLS], int rows, int cols)
{
    int i, j;
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            printf("%d ", *(*(matrix + i) + j));
        }

        printf("\n");
    }
}
