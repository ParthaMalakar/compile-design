#include<bits/stdc++.h>
using namespace std;

int main(){

ifstream infile;

infile.open("Task1.cpp");

string s;
string total;

while(getline(infile,s)){
total = total+s;
}

cout<<total;



return 0;
}
