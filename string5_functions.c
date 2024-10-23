#include <stdio.h>
#include <string.h>

int main()
{

// 1. strlen function to print length of the string
   char string[] = "Rohit";
   printf("%d\n", strlen(string));

// 2. strcpy to copy an string to another
   
   char ptr[30];
    strcpy(ptr,string);    // this is the syntax of strcpy --> strcpy(target string,main string );
    printf("%s\n", ptr);

//3. strcat --> used to concatinate two string 
  
    char str[] = " Deshwal";
    strcat(string,str);
    printf("string is %s \n",string);

//4. strcmp --> it is used to compare two strings  --> character by character on the reference of asscai values.

   char str[]="mohit";
   char ptr[]="rohit";
   // if strings are same the it returns 0(means true )|

   // if strcmp(rohit,mohit)--> +ve value (generaly +1),because M comes first before R in asscai value table ;
   // if (first(-ve) ,second(+ve))--> if the character of first string comes first in asscai value like M and R then gives-> -ve value (generally -1)
   // if (first(-ve) ,second(+ve))--> if the character of second string comes first in asscai value like R and M then gives-> +ve value (generally +1)
   
   int a =strcmp(str,ptr);    // declearaing a new variable to store result of comparing the strings 
   printf("%d\n",a);
   
   
   return 0;
}