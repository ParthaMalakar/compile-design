#include<bits/stdc++.h>
using namespace std;
void myStrcpy(char a[],char b[])
{
   int i;
   for(i=0;b[i]!='\0';i++)
   {
       a[i]=b[i];
       cout<<b[i];
   }
}
int main(){




char a[]="I love C++";



char b[]="I love .";

myStrcpy(a,b);

//cout<<c.length()<<" "<<mystrlen(c)<<endl;





return 0;
}
