#include <bits/stdc++.h>
using namespace std;
int largestElement(vector<int> arr)
{
    int ans = INT_MIN;
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > ans)
            ans = arr[i];
    }
    return ans;
}
int secondLargest(vector<int> arr, int n)
{
    int largest = arr[0];
    int slargest = -1;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > largest)
        {
            slargest = largest;
            largest = arr[i];
        }
        else if (arr[i] != largest and arr[i] > slargest)
            slargest = arr[i];
    }
    return slargest;
}

int main()
{
    vector<int> arr = {3, 6, -3, -1, 5, 7, -8, 7, 9, 2, 8, 9};
    // int largest = largestElement(arr);
    int slargest=secondLargest(arr,arr.size());
    sort(arr.begin(), arr.end());
    for (int i : arr)
        cout << i << " ";
    cout << endl;
    cout << slargest;
}