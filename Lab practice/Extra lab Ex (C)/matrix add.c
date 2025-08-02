#include <stdio.h>
int main()
{
    int matrix1[2][2], matrix2[2][2], result[2][2];
    int i, j;

    // Input first matrix
    printf("Enter elements of the first 2x2 matrix:\n");
    for (i = 0; i < 2; i++)
        {
           for (j = 0; j < 2; j++)
           {
              printf("Element [%d][%d]: ", i, j);
              scanf("%d", &matrix1[i][j]);
           }
        }

    // Input second matrix
    printf("Enter elements of the second 2x2 matrix:\n");
    for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 2; j++)
            {
               printf("Element [%d][%d]: ", i, j);
               scanf("%d", &matrix2[i][j]);
            }
        }

    // Matrix addition
    for (i = 0; i < 2; i++)
        {
           for (j = 0; j < 2; j++)
           {
              result[i][j] = matrix1[i][j] + matrix2[i][j];
           }
        }

    // Display the result
    printf("Resultant matrix after addition:\n");
    for (i = 0; i < 2; i++)
        {
           for (j = 0; j < 2; j++)
           {
              printf("%d\t", result[i][j]);
           }
           printf("\n");
        }

    return 0;
}
