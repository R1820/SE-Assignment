#include<stdio.h>
#include<string.h>

struct student
{
    char name[20];
    int roll;
    float cgpa;
};
int main()
{
   //student data 1.
    struct student s1;
    strcpy(s1.name,"Ravi");
    s1.roll=1229;
    s1.cgpa=7.31;

    printf(" ===== Student Data =====\n");
    printf(" ---- Student 1 ----\n");
    printf("Name is:%s\n",s1.name);
    printf("Roll no is:%d\n",s1.roll);
    printf("Cgpa is:%.2f\n",s1.cgpa);

    //student data 2.

    struct student s2;
    strcpy(s2.name,"Kuldip");
    s2.roll=1162;
    s2.cgpa=6.63;

    printf(" ---- Student 2 ----\n");
    printf("Name is :%s\n",s2.name);
    printf("Roll no is:%d\n",s2.roll);
    printf("Cgpa is:%.2f\n",s2.cgpa);

    //student data 3.

    struct student s3;
    strcpy(s3.name,"Himmat");
    s3.roll=1192;
    s3.cgpa=7.20;

    printf(" ---- Student 3 ----\n");
    printf("Name is:%s\n",s3.name);
    printf("Roll is:%d\n",s3.roll);
    printf("Cgpa is:%.2f",s3.cgpa);

}
