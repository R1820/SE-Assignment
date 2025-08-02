#include <stdio.h>
int main()
{
    int N, i, sum = 0;

    // Ask user for the number of elements
    printf("Enter the number of elements (N): ");
    scanf("%d", &N);

    int arr[N]; // Declare array of size N

    // Input elements from user
    printf("Enter %d numbers:\n", N);
    for (i = 0; i < N;i++)
        {
          printf("Element %d: ", i + 1);
          scanf("%d", &arr[i]);
          sum += arr[i]; // Add element to sum
        }

    // Display the sum
    printf("Sum of all elements = %d\n", sum);
    return 0;
}
