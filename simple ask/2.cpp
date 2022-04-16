#include<iostream>
using namespace std;
//#include <string>
int main()
{
char A[3]={'h','e','\0'};
   char s[]="HELLO";
    printf("%s\n",s);
    for(int i=0;A[i]!='\0';i++)
    {
        printf("%c",A[i]);
    }
}
