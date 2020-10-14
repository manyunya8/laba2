#include <stdio.h>

int main()
{
    int k = 0;
    char str[256];
    char* a;
    char* b;
    char* i;
    printf("Enter the string: ");
    fgets(str, 255, stdin);
    a = str;
    b = str + 256;
    i = str;

    while (*i != '\0')
    {
        if (*i < 'A' || *i > 'Z' && *i < 'a' || *i > 'z' )
        {
            if (k < b - a && k != 0)
            {
                a = i - k;
                b = i;
            }
            k = 0;
        }
        else
        {
            k++;
        }
        i++;
    }
    if (k < b - a && k != 0)
    {
        a = i - k;
        b = i;
    }

    if (b - a != 256)
    {
        printf("The shorter word: ");
        while (a != b)
        {
            printf("%c", *a);
            a++;
        }
    }
    else
    {
        printf("No words");
    }
    return 0;
}