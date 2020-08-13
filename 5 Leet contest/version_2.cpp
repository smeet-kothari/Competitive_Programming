int change(int amount, vector<int>& coins) 
{
	if(amount==0 && coins.size()==0) return 1;
	sort(coins.begin(),coins.end());
	long int dp[coins.size()+1][amount+1]; //Bottom-Up Approach
	for (int i=0;i<=coins.size();i++) // Only one way to make amount 0
	dp[i][0]=1;
	for (int i=0;i<=amount;i++) dp[0][i]=0; //We dont have coins
	for (int i=1;i<=coins.size();i++)
	{
		for (int j=1;j<=amount;j++)
		{
			long int cv=coins[i-1];
			long int pre=dp[i-1][j];
			long int next=j>=cv?dp[i][j-cv]:0;
			dp[i][j]=pre+next;
		}
	}
	return dp[coins.size()][amount];
}