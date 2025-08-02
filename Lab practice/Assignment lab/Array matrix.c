#include<STDIO. h>
int main()
{

    // Part 1: One-dimensional array

    int arr[5];
    printf("Enter 5 integers:\n");
    for (int i = 0; i < 5; i++)
        {
           printf("Element %d: ", i + 1);
           scanf("%d", &arr[i]);
        }

    printf("\nYou entered the following 1D array:\n");
    for (int i = 0; i < 5; i++)
        {
          printf("%d ", arr[i]);
        }

    // Part 2: Two-dimensional array (3x3 matrix)

    int matrix[3][3];
    int sum = 0;

    printf("\n\nEnter elements for a 3x3 matrix:\n");
    for (int i = 0; i < 3; i++)
        {
          for (int j = 0; j < 3; j++)
          {
             printf("Element [%d][%d]: ", i, j);
             scanf("%d", &matrix[i][j]);
             sum += matrix[i][j];
          }
        }

    printf("\nThe 3x3 matrix is:\n");
    for (int i = 0; i < 3; i++)
        {
          for (int j = 0; j < 3; j++)
          {
             printf("%d\t", matrix[i][j]);
          }
          printf("\n");
        }

    printf("\nSum of all elements in the matrix: %d\n", sum);

    return 0;
}
