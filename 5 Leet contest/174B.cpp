int minSetSize(vector<int>& a) 
{
    int n=a.size(),mx=INT_MIN,f[100001]={0},k=n;
    for (int i=0;i<n;i++) 
    {
        //cin>>a[i];
        if(a[i]>mx) mx=a[i];
        f[a[i]-1]+=1;
    }
    sort(f,f+mx);
    int ans=0;
    for (int i=mx-1;i>=0;i--)
    {
        k -= f[i];
        ans++;
        if(k<=n/2)
        {
            break;
        }
    }
    return ans;
}