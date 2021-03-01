int maxAbsoluteSum(vector<int>& a) {
    int n=a.size();
    int k[n];
    k[0]=a[0];

    for (int i=1;i<n;i++) {
        k[i]=max(a[i],k[i-1]+a[i]);
    }
    int m=INT_MIN;
    for (int i=0;i<n;i++) m=max(m,k[i]);

    k[0] *= -1;
    for (int i=0;i<n;i++) a[i]*=-1;

    for (int i=1;i<n;i++) k[i]=max(a[i],k[i-1]+a[i]);

    for (int i=0;i<n;i++) {
        m=max(m,k[i]);
    }
    return m;

}