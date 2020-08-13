//@Author Smeet Kothari
// Print all Substrings
#include<bits/stdc++.h>
using namespace std;
int main () {
    string str,s;
    cin>>str;
    for (int i=0;i<str.length();i++) {
        for (int j=i;j<str.length();j++) {
            s=str.substr(i,j);
            cout<<s<<'\n';
        }
    }
    return 0;
}
