// as usual we print length of string using strlen function of string but 
// in this program we are not using it 
// instead we made a user defined function (length) to do the opration for us.

#include <stdio.h>


int length(char str[]){
        int i=0;  // initialising i 
        int count=0;
        char c=str[i];

        while(c!='\0'){    // while c is not a null character perfor the following 
            c=str[i];
            i++;
        }
        count=i-1;
        printf("Length is %d ",count);   // as in i it takes null as a character so i-1 gives actual number of characters.
        //return count;
        //printf("Length:%d",i);   // printing the i means itrations because as much itrations are there length is equal to it
}

int main(){

    	char str[]="harry bhai";
length(str);     // calling the function length


   return 0;
}