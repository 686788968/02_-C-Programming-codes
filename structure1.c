#include <stdio.h>
#include <string.h>

struct emp
{char 
   name[10];
   float code;
   int age;

}; // remember the semicolon at end of brackets

int main()
{
   struct emp e1, e2;
   strcpy(e1.name, "Rohit");
   e1.code = 1102.0;
   e1.age = 19;

   printf("%s ,%f ,%d \n", e1.name, e1.code, e1.age);

   strcpy(e2.name, "Harry ");
   e2.code = 1208.0;
   e2.age = 23;

   printf("%s ,%f ,%d \n", e2.name, e2.code, e2.age);

   return 0;
}