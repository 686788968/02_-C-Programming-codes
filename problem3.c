
#include <stdio.h>
#include <string.h>

struct emp
{
    char name[100];
    float salary;
    int age;
};

int main()
{

    struct emp rohit = {"rohit", 98000, 23}; // declearing a employee named rohit inside emp structure to store details of rohit

    printf("%s,%f,%d \n", rohit.name, rohit.salary, rohit.age); // ascessing the values using rohit.variable_name.

    return 0;
}