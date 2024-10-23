#include <stdio.h>
#include <string.h>

int main()
{
    char c = 'r';
    int count = 0;
    char str[] = "harry rrr ke fan hai or me bhi";

    for (int i = 0; i < strlen(str); i++)
    {

        if (str[i] == c)
        {
            count++;
        }
    }
    printf("count is %d\n", count);
    return 0;
}