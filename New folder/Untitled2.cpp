/* 2 Program to print number of tokens in another C program (input a string)

Input:
int a = 10 ;
Output:
int
a
=
10

*/

#include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std;
void substring()
{
    /* Substring function.
    string - Actual String from which substring will be made.
    sub - Substring created will be stored here.
    start - Starting index.
    end - Ending index + 1.
    */

}
string token(char str[500])
{
    // char str[500];
    char token[50];
    int idx, i = 0;
    char s[50];
     char sub[500];
      int start;
       int e;
   for (idx = 0; str[idx] != '\0'; idx++)
    {
        // Tokenizing at space and semicolon.
        if (str[idx] == ' ' || str[idx] == ';')
        {
             int idx = 0;

    while (start < e)
    {
        sub[idx] = s[start];
        idx++;
        start++;
    }
    sub[idx] = '\0';

            i = idx + 1;
        }
        return token;
}
}

int main()
{
    char str[500];


    printf("Enter a string:\n");
    scanf("%[^\n]%*c", str); // string input with spaces.
string token2=token(str);
    printf("%s \n", token2);

}


//

