#include <stdio.h>
#include <string.h>

struct emp
{
    char name[100];
    float code;
    int age;
};

int main()
{

    struct emp e1, e2, e3;

    printf("Enter your name : ");
    scanf("%s", &e1.name);

    printf("enter code :  ");
    scanf("%f", &e1.code);
    printf("Enter Your Age : ");
    scanf("%d", &e1.age);

    printf("Enter your name : ");
    scanf("%s", &e2.name);

    printf("enter code :  ");
    scanf("%f", &e2.code);
    printf("Enter Your Age : ");
    scanf("%d", &e2.age);

    printf("Enter your name : ");
    scanf("%s", &e3.name);

    printf("enter code :  ");
    scanf("%f", &e3.code);
    printf("Enter Your Age : ");
    scanf("%d", &e3.age);

    printf("Details of Employee 1 is :%s ,%f ,%d \n", e1.name, e1.code, e1.age);
    printf("Details of Employee 2 is :%s ,%f ,%d \n", e2.name, e2.code, e2.age);
    printf("Details of Employee 3 is :%s ,%f ,%d \n", e3.name, e3.code, e3.age);
    
    return 0;
}