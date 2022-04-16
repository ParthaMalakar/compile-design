#include<bits/stdc++.h>
using namespace std;
void printlist(int *p,int s)
{
    for(int i=0;i<s;i++)
    {
        cout<<(p+i)<<p[i]<<endl;
    }
}
int main()
{
    int a[5]={10,20,30,40,50};
    printlist(a,5);
}
