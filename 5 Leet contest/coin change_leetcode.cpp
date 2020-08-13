int coinChange(vector<int>& coins, int amount) 
{
    long int dp[amount+1];  //Bottom Up Approach
    dp[0]=0;
    sort(coins.begin(),coins.end());
    for (int i=1;i<=amount;i++)
    {
        dp[i]=INT_MAX;
        for (int j=0;j<coins.size();j++)
        {
            if(i-coins[j]>=0) dp[i]=min(dp[i],dp[i-coins[j]]+1);
            else break;
        }
    }
    if(dp[amount]==INT_MAX) return -1;
    else return dp[amount];
}