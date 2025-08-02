#include<stdio.h>
int main()
{
     // Multiplication table.

    int num;

    printf("multiplication table of num:\n");
    scanf("%d",&num);

    for (int i=1;i<=10;i++)
    {
        printf("%d*%d=%d\n",num,i*1,i*num);
    }
    printf("Remainder value...");

    return 0;
}
