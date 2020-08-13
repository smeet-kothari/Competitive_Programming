//
// Created by Smeet Kothari on 21-05-2020.
//
/* https://www.youtube.com/watch?v=B7hVxCmfPtM */
/* https://www.geeksforgeeks.org/heap-using-stl-c/ */
void haepify(int a[],int n,int i)
{
    int l=2*i+1,r=2*(i+1),p=i;

    //If left Child is Greater
    if(l<n && a[l]>a[p])
    {
        swap(a[l],a[p]);
        heapify(a,n,l);
    }

    else if(r<n && a[r]>a[p])
    {
        swap(a[r],a[p]);
        heapify(a,n,r);
    }
}

void build_heap(int a,int n)
{
    //Heap
    for (int i=n/2;i>=0;i--)
        heapify(a,n,i);
}

