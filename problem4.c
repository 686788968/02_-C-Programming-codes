// Decription of the problem3 result 
// simply decreasing the ascai value by one to cut out the increption of +1 as +1 + -1 = 0

#include <stdio.h>
#include <string.h>

int main(){

    	
    char str[]="nz!obnf!jt!spiju!eftixbm!kbbu";
    for (int i=0;i<strlen(str);i++){
        str[i]=str[i]-1;

    }
printf("the string is:=> %s\n",str);



   return 0;
}
        