#include <stdio.h>
#include <string.h>

struct emp
{
    // char name[100];
    float salary;
    // int age;
};

int main()
{

    struct emp employe[100];   // using array named emplye in a structure to store salary of employes from index [0] to index [2]  three employe data

    employe[0].salary = 23000;
    employe[1].salary = 33000;
    employe[2].salary = 95000;

    printf("%f,%f,%f \n", employe[0].salary, employe[1].salary, employe[2].salary);

    return 0;

}

