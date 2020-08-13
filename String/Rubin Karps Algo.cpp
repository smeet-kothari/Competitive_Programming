#include<bits/stdc++.h>
using namespace std;
int main() {
    string s,p;
    cin>>s>>p;
    int k=p.size();
    int knum=0;
    for (int i=0;i<k;i++) {
        knum += pow(26,k-i-1)*(p[i]-96);
    }
    int snum=0;
    for (int i=0;i<s.size()-k+1;i++) {
        int count=k,j=i;
        while(count>0 && j<s.size()) {
            snum += pow(26,count-1)*(s[j]-96);
            count--;
            j++;
        }
        if(snum==knum) { printf("YES"); return 0; }
        snum=0;
    }
    printf("NO");
    return 0;
}
