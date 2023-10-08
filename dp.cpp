#include <bits/stdc++.h>
using namespace std;
long long mod = 10e9 + 7;
long long int count(int coins[], int N, int sum)
{
    long long int dp[N + 1][sum + 1];
    for (int i = 0; i <= N; i++)
    {
        for (int j = 0; j <= sum; j++)
        {
            if (i == 0)
            {
                dp[i][j] = 0;
            }
            else if (j == 0)
                dp[i][j] = 1;
            else
            {
                if (coins[i - 1] > j)
                    dp[i][j] = dp[i - 1][j];
                else
                    dp[i][j] = dp[i - 1][j] + dp[i][j - coins[i - 1]];
            }
        }
    }
    return dp[N][sum];
}
int knapSack(int W, int wt[], int val[], int n)
{
    int dp[n + 1][W + 1];
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= W; j++)
        {
            if (i == 0 || j == 0)
            {
                dp[i][j] = 0;
            }
            else
            {
                if (wt[i - 1] > j)
                    dp[i][j] = dp[i - 1][j];
                else
                    dp[i][j] = max(dp[i - 1][j], val[i - 1] + dp[i - 1][j - wt[i - 1]]);
            }
        }
    }
    return dp[n][W];
}
bool isSubsetSum(vector<int> arr, int sum)
{
    int n = arr.size();
    bool dp[n + 1][sum + 1];
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= sum; j++)
        {
            if (i == 0)
            {
                dp[i][j] = false;
            }
            else if (j == 0)
            {
                dp[i][j] = true;
            }
            else
            {
                dp[0][0] = true;
                if (arr[i - 1] > j)
                    dp[i][j] = dp[i - 1][j];
                else
                    dp[i][j] = dp[i - 1][j] or dp[i - 1][j - arr[i - 1]];
            }
        }
    }
    return dp[n][sum];
}
int editDistance(string s, string t)
{
    int m = s.size();
    int n = t.size();
    int dp[m + 1][n + 1];
    for (int i = 0; i <= m; i++)
    {
        dp[i][0] = i;
    }
    for (int j = 0; j <= n; j++)
    {
        dp[0][j] = j;
    }
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (s[i - 1] == t[j - 1])
                dp[i][j] = dp[i - 1][j - 1];
            else
                dp[i][j] = 2;
            // dp[i][j] = 1 + min({dp[i - 1][j], dp[i][j - 1], dp[i - 1][j - 1]});
        }
    }
    return dp[m][n];
}
int countFriendsPairings(int n)
{
    long long dp[n + 1];
    dp[0] = 0;
    dp[1] = 1;
    for (int i = 2; i <= n; i++)
    {
        dp[i] = dp[i - 1] % mod;
        dp[i] += (dp[i - 2]%mod * (i - 1)%mod) % mod;
        dp[i] = dp[i] % mod;
    }
    return dp[n] % mod;
}

int main()
{
    cout << countFriendsPairings(4);
    // cout << count(coins, N, Sum);
}