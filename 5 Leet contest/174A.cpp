vector<int> kWeakestRows(vector<vector<int>>& mat, int k) 
{
    int p,n=mat.size(),m=mat[0].size();
    vector<vector<int>> ans(m+1);
    for(int i=0; i<n; i++)
    {
        int c=0;
        for(int j=0; j<m; j++){
            //cin >> p;
            c+=mat[i][j];
        }
        ans[c].push_back(i);
    }
    vector<int> final;
    for(auto it: ans){
        if(it.size()!=0){
            for(auto itt: it){
                final.push_back(itt);
                k--;
                if(k==0) break;
            }
            if(k==0) break;
        }
        if(k==0) break;
    }
    return final;
    }