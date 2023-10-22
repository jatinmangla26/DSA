#include <bits/stdc++.h>
using namespace std;
long long maxSubarraySum(int arr[], int n)
{
    long long ans = arr[0];
    long long sumTillNow = arr[0];
    for (int i = 1; i < n; i++)
    {
        sumTillNow += arr[i];
        if (sumTillNow > ans)
            ans = sumTillNow;
        else if (sumTillNow < 0)
            sumTillNow = 0;
    }
    return ans;
}
int main()
{
}