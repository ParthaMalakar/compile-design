#include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std;
int Mfun(char s[25])
{

  // char s[];
    int flag;
    int c;
     if ((s[0] >= 'a' && s[0] <= 'z') //small letter
        ||
        (s[0] >= 'A' && s[0] <= 'Z') //cap letter
        ||
        (s[0] == '_') //underscore
    )
    {
        for (int i = 1; i <= strlen(s); i++)
        {
            if ((s[i] >= 'a' && s[i] <= 'z') ||
                (s[i] >= 'A' && s[i] <= 'Z') ||
                (s[i] >= '0' && s[i] <= '9') ||
                (s[i] == '-'))
            {
                c++;
            }
        }
        if (c == strlen(s))
        {
            flag = 0;
        }
    }
    else
    {
        flag = 1;
    }
    return flag;
}

int main()
{
    char s[25];


    printf("enter any string: ");
    gets(s);

       int c=Mfun(s);
    if (c == 1)
        printf("It is not valid identifier");
    else
        printf("It is valid identifier");
    return 0;
}

