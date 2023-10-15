#include <bits/stdc++.h>
using namespace std;
int missingNumber(vector<int> &array, int n)
{
    int sz = array.size();
    int Arraysum = accumulate(array.begin(), array.end(), 0);
    int sum = (n * (n + 1)) / 2;
    return sum - Arraysum;
}
int findMaxConsecutiveOnes(vector<int> &nums)
{
    int n = nums.size();
    int ans = 0;
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (nums[i] == 1)
        {
            cnt++;
            ans = max(ans, cnt);
        }
        else
            cnt = 0;
    }
    return ans;
}
int singleNumber(vector<int> &nums)
{
    int xorN = 0;
    for (int i = 0; i < nums.size(); i++)
        xorN = xorN ^ nums[i];

    return xorN;
}
int main()
{
    vector<int> arr = {6, 1, 2, 8, 3, 4, 7, 10, 5};
    arr = {1, 1, 0, 1, 1, 1};
    arr = {4, 1, 2, 1, 2};
    // arr = {1, 0, 1, 1, 0, 1};
    // int n = 10;
    // cout << missingNumber(arr, n);
    cout << singleNumber(arr);
}