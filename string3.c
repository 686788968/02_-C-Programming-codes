#include <stdio.h>
#include <string.h>

int main()
{

    char st[30] = ("Rohit Deshwal");
     printf("%s\n",st);

    char str[9];
     printf("Enter the string: ");
     scanf("%s", str);          // in scanf the %s specifier adds an null characher to last of string automatically

    printf("%s",str);

    // code to check the null char at the end of the input string
    for (int i = 0; i < 6; i++)
    {
        printf(" character is %c\n", str[i]);
    }

    return 0;
}
