/* 4 Program to find the number of alphabets, digits and special characters in a given input

Input:
hello_?10
Output:
Alphabets = 5
Digits = 2
Special characters = 2
*/

#include <stdio.h>
#define MAX_SIZE 100 // Maximum string size
void mydo(char str[MAX_SIZE])
{
    // char str[];
    int alphabets,digits, others, i,a;

    alphabets = digits = others = i = 0;
     while (str[i] != '\0')
    {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
        {
            alphabets++;

        }
        else if (str[i] >= '0' && str[i] <= '9')
        {
            digits++;

        }
        else
        {
            others++;

        }
        i++;
    }

}
int main()
{

 char str[MAX_SIZE];
int alphabets, digits, others, i;

    /* Input string from user */
    printf("Enter any string : ");
    gets(str);

    /*
	* Check each character of string for alphabet, digit or special character
	*/

 mydo(str);

 printf("Alphabets = %d\n", alphabets);


    printf("Digits = %d\n", digits);
    printf("Special characters = %d", others);

    return 0;
}



