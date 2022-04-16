#include <bits/stdc++.h>
using namespace std;

int main()
{

string keyword[32]=
{
"auto","double","int","struct","break","else","long",
"switch","case","enum","register","typedef","char",
"extern","return","union","const","float","short",
"unsigned","continue","for","signed","void","default",
"goto","sizeof","voltile","do","if","static","while"
} ;


string str;
cout<<"Enter a keyword: ";
cin>>str;

 int flag=0;

for(int i = 0; i < 32; i++)
{
if(str==keyword[i])
{
flag=1;
}
}
if(flag==1)
cout<<str<<" is keyword.";
else
cout<<str<<" is not keyword.";
}
