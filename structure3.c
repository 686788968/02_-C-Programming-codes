// // typedef fuction in c programming.
// // Understanding typedef.

// #include <stdio.h>
// #include <string.h>

// int main()
// {

//     typedef int var ;     // Here we defined a new custom name for the data type int like i use a my own name to use int data type
//     //int a= 34;                // irrespective of writing (int a )i can write (var a)  here var == int
//     var a= 34;
//     var b=56;

//     printf("Value of a is : %d\n", a);
//     printf("Value of a is : %d\n", b);
//     return 0;
// }

// using typedef for a structure

#include <stdio.h>
#include <string.h>

typedef struct emp      // used to define an custom data type name , here struct is renamed to Emp (not emp okey)
{                       // now we can use Emp instead of - struct emp

    int age;

} Emp;

int main()
{

    Emp e1; // instead of writing struct emp , we can write Emp ,because it is defined above in structure using typedef
    e1.age = 19;
    printf("the age is : %d", e1.age);
    return 0;
}
