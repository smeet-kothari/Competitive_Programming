/* bit masking*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t1,x,count=0;
    vector<int>v;
    cin>>n;
    t1=n&(n+1);
    if(t1==0) cout<<0;
    else 
    {
        long long int high=pow(2,(int)log2(n)+1)-1,low=pow(2,(int)log2(n)),temp;
        //cout<<n<<" "<<high;
        while(n!=high)
        {
            if(count%2==1) 
            {
                n += 1;
                count++;
            }
            else
            {
                low=pow(2,(int)log2(n));
                //cout<<"low="<<low<<endl;
                while(1)
                {
                    temp=n^(low-1);
                    if(temp<=high && temp>n) 
                    {
                        n=temp;
                        x=(int)log2(low);
                        v.push_back(x);
                        count++;
                        break;
                    }
                    low /= 2;
                }
            }
        }
        cout<<count<<endl;
        for (int i=0;i<v.size();i++) cout<<v[i]<<" ";
    }
    return 0;
}