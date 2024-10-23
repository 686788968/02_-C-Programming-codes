#include <stdio.h>
#include <string.h>

// int strlen();

int main()
{ 

    char str[30] = "harry";
    int i = 0,count;
    char c = str[i];
    while (c != '\0')
    {
        c= str[i];
        i++;
    }

    return 0;
}