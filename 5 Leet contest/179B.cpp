#include<bits/stdc++.h>
using namespace std;

int numTimesAllBlue(vector<int>& light) 
    {
        int n=light.size();
        int y[n+1]={0},b[n+1]={0},ans=0,ma=INT_MIN;
        for (int i=0;i<n;i++)
        {
            ma=max(ma,light[i]);
            if(light[i]==1)
            {
                y[0]=1;
                b[0]=1;
                for (int j=1;j<ma;j++) 
                {
                    if(b[j-1]==1 && y[j]==1) b[j]=1;
                    else break;
                }
            }
            else 
            {
                y[light[i]-1]=1;
                if(b[light[i]-2]==1) 
                {
                    b[light[i]-1]=1;
                }
                for (int j=light[i];j<ma;j++) 
                {
                    cout<<"j"<<j<<" "<<y[light[j]]<<" "<<b[light[j]-2]<<endl;
                    if( y[light[j]-1]==1 && b[light[j]-2]==1 ) 
                        b[light[j]-1]=1;
                    else break;
                }
            }
            int flag=1;
            for (int j=0;j<ma;j++)
            {
               if(b[j]!=1)
               {
                   flag=0;
                   break;
               }
            }
            if(flag) ans++;
            /*cout<<"y";
            for (int j=0;j<ma;j++) cout<<y[j]<<" ";
            cout<<endl;
            for (int j=0;j<ma;j++) cout<<b[j]<<" ";
            cout<<endl;*/
        }
        return ans;
    }

int main()
{
    vector<int> v={1,2,3,4,7,6,5,8};
    cout<<numTimesAllBlue(v);
    return 0;
}