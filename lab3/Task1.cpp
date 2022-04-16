#include<bits/stdc++.h>
using namespace std;
string readFile(ifstream &infile)
{

string line;
string s;
while(getline(infile,line)){
s+=line+'\n';
}
return s;

}

int main(){
    string s;
   ifstream infile;

infile.open("in.cpp");
s=readFile(infile);

cout<<s<<endl;


}
