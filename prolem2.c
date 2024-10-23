#include <stdio.h>
#include <string.h>

int main(){

    char str[6];     //take 1 to 5 characters and at 6 th char  a NULL char value
    for(int i=0;i<5;i++){
        
        scanf(" %c",&str[i]);  // insted of fflush --> used a space before( %c) to deal with new line/whitespace character.
        //fflush(stdin);    //used to neglect the enter key and do not take as a char input
    }
    str[5]='\0';      //initialising the value at index 5 to NULL
    printf("%s",str);

   return 0;
}
// input = r ,o ,h ,i ,t
//output = rohit