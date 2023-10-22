#include <bits/stdc++.h>
using namespace std;
vector<int> subarraySum(vector<int> arr, int n, long long s)
{
    vector<int> ans;
    int i = 0;
    int j = 0;
    int sum = arr[0];
    while (j < n)
    {
        while (sum > s and i < j)
        {
            i++;
            sum = sum - arr[i];
        }
        if (sum == s)
        {
            return {i, j};
        }
        else
        {
            j++;
            sum = sum + arr[j];
        }
    }
    return {-1, -1};
}

vector<int> subArraySumWithNegative(vector<int> arr, int n, long long s)
{
    map<int, int> sumVsIndex;
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        if (sum == s)
        {
            return {1, i+1};
        }
        if (sumVsIndex.find(sum - s) != sumVsIndex.end())
        {
            return {sumVsIndex[sum - s]+1, i+1};
        }
        sumVsIndex.insert({i, sum});
    }
    return {-1, -1};
}

int main()
{
    int N = 10;
    int S = 15;
    vector<int> A = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cout << subArraySumWithNegative(A, N, S)[0];
    cout << subArraySumWithNegative(A, N, S)[1];
}