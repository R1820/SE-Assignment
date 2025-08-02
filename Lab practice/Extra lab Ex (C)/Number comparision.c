#include<stdio.h>
int main()
{
    int num1,num2,num3;
    int largest, smallest;

    // Input three numbers from the user
    printf("Enter no.1:");
    scanf("%d",&num1);

    printf("Enter no.2:");
    scanf("%d",&num2);

    printf("Enter no.3:");
    scanf("%d",&num3);

    // Determine the largest number
    if (num1 >= num2 && num1 >= num3)
        {
          largest = num1;
        }
    else if (num2 >= num1 && num2 >= num3)
        {
           largest = num2;
        }
    else
        {
          largest = num3;
        }

    // Determines the smallest number
    if (num1 <= num2 && num1 <= num3)
        {
           smallest = num1;
        }
    else if (num2 <= num1 && num2 <= num3)
        {
          smallest = num2;
        }
    else
        {
          smallest = num3;
        }

    //output the result
    printf(" The largest number: %d\n",largest);
    printf(" The smallest number: %d\n",smallest);

    return 0;
}
