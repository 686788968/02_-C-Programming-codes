//defining a two dimensional vector using structure 
// as there are two axis x-axis,y-axis , represented i for x and j for y -- > 2i^ ,3j^ (3 j cap );

#include <stdio.h>
#include <string.h>


struct vector {
    int i;
    int j;
};

int main(){

    	struct vector V = {2,5};
        

        printf ("the vector is %d i^ ,%d j^",V.i ,V.j);


   return 0;
}