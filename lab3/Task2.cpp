#include<bits/stdc++.h>
using namespace std;

string readfile(ifstream &infile){
string line;
string s;
while(getline(infile,line)){
s+=line+'\n';
}

 return s;
}

string removeComments(string prgm)
{
int n = prgm.length();

 string res;

 // Flags to indicate that single line and multiple line comments
// have started or not.
bool s_cmt = false;
bool m_cmt = false;

// Traverse the given program
for (int i=0; i<n; i++)
{
// If single line comment flag is on, then check for end of it
if (s_cmt == true && prgm[i] == '\n')
s_cmt = false;

 // If multiple line comment is on, then check for end of it
else if (m_cmt == true && prgm[i] == '*' && prgm[i+1] == '/')
m_cmt = false, i++;

 // If this character is in a comment, ignore it
else if (s_cmt || m_cmt)
continue;

 // Check for beginning of comments and set the appropriate flags
else if (prgm[i] == '/' && prgm[i+1] == '/')
s_cmt = true, i++;
else if (prgm[i] == '/' && prgm[i+1] == '*')
m_cmt = true, i++;

 // If current character is a non-comment character, append it to res
else res += prgm[i];
}
return res;
}

int main(){

 ifstream infile;
infile.open("in1.cpp");

 string s = readfile(infile);
cout<<"Before remove comments"<<endl;
cout<<s<<endl;
cout<<"after remove comments"<<endl;

 string rs= removeComments(s);

 cout<<rs<<endl;


return 0;
}
