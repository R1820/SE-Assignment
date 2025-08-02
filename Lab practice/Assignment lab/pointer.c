#include<stdio.h>
int main()
{
    int num=1520;
    int *p;
    p=&num;
    printf("Address of value %x\n", &num);
    printf("Address of pointer %x\n",p);

    num=1050;
    printf("After modified value\n");
    printf("Address of pin %x\n", &num);
    printf("Address of pointer %x\n",p);
    printf("value of Pointer %d\n",*p);

    return 0;

}
