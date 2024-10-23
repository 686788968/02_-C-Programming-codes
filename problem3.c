//Incription 
// incript a string by adding 1 to the asscai value of each characters 
// so the language/string is unable to read 

#include <stdio.h>
#include <string.h>

int main(){

    char str[]="My Name is Rohit Deshwal Jaat";
    for (int i=0;i<strlen(str);i++){
        str[i]=str[i]+1;

    }
printf("the string is:=> %s\n",str);

   return 0;
}