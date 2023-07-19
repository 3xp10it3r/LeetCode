//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
  public:
    int f(int i, int j, string &s, vector<vector<int>>& dp) {
        if(i == j) return 1;
        if(i > j) return 0;
        
        if(dp[i][j] != -1) return dp[i][j];
        
        if(s[i] == s[j]) return dp[i][j] = 2 + f(i+1, j-1, s,dp);
        
        return dp[i][j] = max(f(i+1, j, s,dp), f(i, j-1, s,dp));
    }
    int longestPalinSubseq(string A) {
        int n  = A.size();
        vector<vector<int>> dp(n,vector<int>(n,-1));
        return f(0, n-1, A, dp);
    }
};

//{ Driver Code Starts.

int32_t main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout << ob.longestPalinSubseq(s) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends