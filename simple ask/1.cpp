#include <iostream>
using namespace std;
int f(int x)
{
    return x*x*x*x*x+3*x*x*x*x+5*x*x*x+2*x*x+x+1;
}
int main()
{
   int a,d;
   cin>>a;
   d=f(a);
   printf("%d",d);
   return 0;
}
