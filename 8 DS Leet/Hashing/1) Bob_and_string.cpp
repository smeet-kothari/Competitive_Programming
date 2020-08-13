//Author @ smeet_kothari
//Very_Easy
#include<bits/stdc++.h>
using namespace std;
int main () {
    int n;
    cin>>n;
    string str1,str2;
    for (int i=0;i<n;i++) {
        int freq1[26]={0};
        int freq2[26]={0};
        cin>>str1>>str2;
        for (int j=0;j<str1.length();j++) {
            int alpha=str1[j]-'a';
            freq1[alpha]++;
        }
        for (int j=0;j<str2.length();j++) {
            int alpha=str2[j]-'a';
            freq2[alpha]++;
        }
        int sum=0;
        for (int j=0;j<26;j++) {
            sum += abs(freq1[j]-freq2[j]);
        }
        cout<<sum<<endl;
    }
    return 0;
}
