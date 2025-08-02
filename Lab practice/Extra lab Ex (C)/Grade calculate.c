#include <stdio.h>
int main()
{
    int marks;

    // Take marks input from the user
    printf("Enter the marks of the student: ");
    scanf("%d", &marks);

    // Determine grade based on the marks
    if (marks > 90)
        {
           printf("Grade: A\n");
        }
    else if (marks > 75 && marks <= 90)
        {
           printf("Grade: B\n");
        }
    else if (marks > 50 && marks <= 75)
        {
           printf("Grade: C\n");
        }
    else
        {
           printf("Grade: D\n");
        }

    return 0;
}
