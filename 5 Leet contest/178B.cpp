class Solution {
public:
    string rankTeams(vector<string>& votes) {
        int n=votes.size(),x=votes[0].size();
        if(n==1)
        {
            return votes[0];
        }
        else 
        {
            vector<char>v[x];
            for (int i=0;i<n;i++)
            {
                string temp=votes[i];
                for (int j=0;j<x;j++)
                {
                   v[j].pushback[temp[j]]; 
                }
            }
            int fre[x][26]={0};
            for (int i=0;i<x;i++)
            {
                sort(v[i].begin(),v[i].end());
                for (int j=0;j<n;j++)
                {
                    
                }
            }
            
            string ans="";
        }
    }
};