#include <stdio.h>
#define max 40
#include <string.h>
void partha(char ch[max])
{
    for (int i = 0; i < strlen(ch); i++)
    {
        if (ch[i] == '+' || ch[i] == '-' || ch[i] == '*' || ch[i] == '%' || ch[i] == '/' || ch[i] == '=')
 printf("\nOperator: %c is at location %d", ch[i], i);
    }
}
int main(int argc, char const *argv[])
{
    char ch[max];
    printf("Enter the statement::");
    scanf("%s", &ch);

    partha(ch);
// printf("\nOperator: %c is at location %d", ch[i], i);
    return 0;
}
