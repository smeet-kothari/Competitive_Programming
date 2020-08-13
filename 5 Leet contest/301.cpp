class Solution 
{
public:
    bool isB(string s)
    {
        int c=0;
        for (int i=0;i<s.size();i++)
        {
            if(s[i]=='(') c++;
            else if(s[i]==')') c--;
            if(c<0) return false;
        }
        return true;
    }
    vector<string> bfs(string s)
    {
        int f=0;
        vector<string>ans;
        queue<string>q;
        q.push(s);
        while(!(q.empty()))
        {
            string temp=q.front();
            q.pop();
            if(isB(temp)) f=1;
            if(f) ans.push_back(temp);
            else
            {
                for(int i=0;i<temp.size();i++)
                {
                    string temp2="";
                    if((temp[i]=='(' || temp[i]==')' )&&i<temp.size()-1)
                    {
                        string temp3=temp2;
                        while(i<temp.size()-1)  temp3+=s[i+1];
                        q.push(temp3);
                    }
                    temp2+=temp[i];
                }
            }
        }
        return ans;
    }
    vector<string> removeInvalidParentheses(string s) 
    {
        return(bfs(s));
    }
};