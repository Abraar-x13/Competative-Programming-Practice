class Solution {
public:
    long long dp[50] = {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1};
    
    int climbStairs(int n) 
    {
        dp[0]=0;
        dp[1]=1;
        dp[2]=2;
        if(dp[n]!=-1) 
        {
            return dp[n];
        }
        else
        {
            dp[n] = climbStairs(n-1) + climbStairs(n-2);
            return dp[n];
        }
    }
};

# Alternate Solution :
class Solution {
public:
    int climbStairs(int n) 
    {    
        long long dp[50];
        dp[0]=0; dp[1]=1; dp[2]=2;

        for(int i=3; i<=n; i++)
        {
            dp[i]= dp[i-1]+dp[i-2];
        }
        return dp[n];
    }
};