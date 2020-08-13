int search(vector<int>& a, int t) {
        
        int l=0,r=a.size()-1,mid;
        
        while(l<=r)
        {
            mid = l+ (r-l)/2;
            
            if(a[mid]==t) return mid;
            else if(a[mid] <= a[r]) //Right array is Sorted
            {
                if(t>a[mid] && t<=a[r]) l=mid+1;
                else r=mid-1;
            }
            else if(a[l] <= a[mid]) //Left array is Sorted
            {
                if(t>=a[l] && t<a[mid]) r=mid-1;
                else l=mid+1;
            }
        }
        
        return -1;
    }
