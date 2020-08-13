/* raat na uthine merge sort lkhto aavdvu joye.. */

// Count swaps using merge as well as quicksort too imp for concepts...

// 500 inputs and turn by turn should contain 50 only

void merge(int a[],int l,int m,int h) {

    int i,j,k,n1 = m-l+1,n2 = h-m;
    int l[n1],r[n2];

    for (int i=l;i<m;i++) {
        l[i]=a[i];
    }
    for (int j=m;j<r;j++) {
        r[j]=a[i];
    }
    //Checking among two halfs
    i=0;j=0;k=0;
    while(i<n1 && j<n2) {
        if(l[i] <= r[j]) {
            a[k++]=l[i++];
        }
        else a[k++] = r[j++];
    }
    // appending remaining one
    while(i<n1) {
        a[k++]=l[i++];
    }
    while(j<n2) {
        a[k++]=r[j++];
    }

    printf("Displaying %d to %d array elements :-\n",l+1,h+1);
    for (int k=l;k<h;k++) {
        printf("%d ",a[k]);
    }
    printf("\n");
}

void mergesort(int a[],int l,int r) {

    // if divide only till 50 then  r-l > 50
    if(l<r) {
        int m=l+(r-l)/2;
        mergesort(a,l,m);
        mergesort(a,m+1,r);
        merge(a,l,m,r);
    }

}

void main() {
    int n;
    cin >> n;
    for (int i=0;i<n;i++) {
        cin >> a[i];
    }
    mergesort(a,0,n);
}