//3 variants
// Unique K characters
// At least K repeating
// At most K characters

//https://leetcode.com/problems/longest-substring-without-repeating-characters/
//https://www.youtube.com/watch?v=qtVh-XEpsJo

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size(),left=0,right=0,ans=0;
        //hashing with set has O(2n)
        map<char,int>m;
        for (int i=0;i<256;i++) m[(char)i]=-1;

        while(right<n) {
            if(m[s[right]] != -1) left=max(left,m[s[right]]+1);
            m[s[right]]=right;
            ans=max(ans,right-left+1);
            right++;
            //cout<<right<<" "<<ans<<endl;
        }
        return ans;

    }
};

//https://leetcode.com/problems/longest-substring-with-at-least-k-repeating-characters/
//https://www.youtube.com/watch?v=5QpMpO2CAb0