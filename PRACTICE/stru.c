#include <stdio.h>

typedef struct student
{
    char name[20];
    char id[20];
    char sec;
    double gpa;
}std;

void printStd(std s1)
{
    printf("Name: %s\n", s1.name);
    printf("Id: %s\n", s1.id);
    printf("Sec: %c\n", s1.sec);
    printf("GPA: %.2lf\n", s1.gpa);

}

int main()
{
    std s1[2];
    int i;

    for(i = 0; i < 2; i++){
        fflush(stdin);
        gets(s1[i].name);
        gets(s1[i].id);
        scanf("%c", &s1[i].sec);
        scanf("%lf", &s1[i].gpa);
    }
    for(i = 0; i < 2; i++){
        printStd(s1[i]);
    }

    return 0;
}
