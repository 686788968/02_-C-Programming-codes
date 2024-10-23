//  pointer to structure

#include <stdio.h>
#include <string.h>

typedef struct emp
{
    //char name[10];
    //float code;
    int age;
}Emp;

int main()
{

    Emp e1;
    //strcpy(e1.name, "Rohit");
    //e1.code = 1102.0;
    e1.age = 19;

    struct emp *ptr;
    ptr = &e1;

    // printf("the value of pointer is : %d",(*ptr).age);
    printf("the value of pointer is : %d",ptr ->age);    //  ptr ->  this is same as (*ptr).age);  

    return 0;
}