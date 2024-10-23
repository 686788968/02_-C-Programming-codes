// code is to be reviewed as it produce correct output but Ai tells  it false
// because it has digital memory managment issues , so it is not recomanded 

#include <stdio.h>
#include <string.h>

char* slice(char str[],int m,int n){
    char* ptr1=&str[m];  // ptr1 points to address of m //initilising two pointers m and  n to point to the first and last char to print 
    char* ptr2=&str[n];
    str=ptr1;
    str[n]='\0';
    return str;
}



int main(){

    // slice(str,m(starting ),n(ending) );
    char str[]="jaat deshwal rohit jaat";
    printf("string is %s ",slice(str,0,10));



   return 0;
}