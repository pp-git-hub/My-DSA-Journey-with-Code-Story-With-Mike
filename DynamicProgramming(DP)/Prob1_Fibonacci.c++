class Solution {
public:
    
    int solve(int n, vector<int> &dp)
    {
        if(dp[n] != -1)
            return dp[n];

        if(n == 0)
            return 0;
        if(n == 1)
            return 1;

        return dp[n] = solve(n - 1, dp) + solve(n - 2, dp);
    }
    
    int fib(int n) 
    {
        vector<int> dp(31,-1);
       return solve(n, dp);
    }

    // Below wala mera normal approach hota
    // int fib(int n) 
    // {
    //     if(n == 0)
    //         return 0;
    //     if(n == 1)
    //         return 1;
        
    //     return fib(n - 1) + fib(n - 2);
    // }
};

// Mera 'DP' ka pehla problem - solution hain..

