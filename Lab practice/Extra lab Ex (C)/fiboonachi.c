#include <stdio.h>

// Recursive function to calculate Fibonacci number

int fibonacci(int n)
{
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
    int N, i;

    // Get number of terms from user
    printf("Enter the number of terms (N): ");
    scanf("%d", &N);

    printf("Fibonacci sequence up to %d terms:\n", N);
    for (i = 0; i < N; i++)
        {
           printf("%d ", fibonacci(i));
        }

    printf("\n");
    return 0;
}
