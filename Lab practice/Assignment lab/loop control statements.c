#include <stdio.h>
int main()
{
    //use of break statements.
    int i;

    printf("Using break (stop at 5):\n");
    for(i = 1; i <= 10; i++)
        {
            if(i == 5)
                {
                   break;
                }
                printf("%d\n", i);
        }

    // use of continue statements.

    printf("Using continue (skip 3):\n");
    for(i = 1; i <= 5; i++)
        {
            if(i == 3)
            {
                continue;
            }
            printf("%d\n", i);
    }

    return 0;
}
