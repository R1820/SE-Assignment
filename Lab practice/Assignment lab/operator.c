#include <stdio.h>

    int main()
    {
      int a;
      int b;

      // Input two value.
    printf("Enter first value: ");
    scanf("%d", &a);
    printf("Enter second value: ");
    scanf("%d", &b);

    // Arithmetic Operations
    printf("\n--- Arithmetic Operations ---\n");
    printf("a + b = %d\n", a + b);
    printf("a - b = %d\n", a - b);
    printf("a * b = %d\n", a * b);

    if (b != 0) {
        printf("a / b = %d\n", a / b);
        printf("a %% b = %d\n", a % b);  // %% to print %
    } else {
        printf("Division and modulus not possible (division by zero).\n");
    }

    // Relational Operations
    printf("\n--- Relational Operations ---\n");
    printf("a == b: %d\n", a == b);
    printf("a != b: %d\n", a != b);
    printf("a > b:  %d\n", a > b);
    printf("a < b:  %d\n", a < b);
    printf("a >= b: %d\n", a >= b);
    printf("a <= b: %d\n", a <= b);

    // Logical Operations
    printf("\n--- Logical Operations ---\n");
    printf("a && b: %d\n", a && b);   // Logical AND
    printf("a || b: %d\n", a || b);   // Logical OR
    printf("!a:     %d\n", !a);       // Logical NOT of a
    printf("!b:     %d\n", !b);       // Logical NOT of b

}
