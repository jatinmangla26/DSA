#include <bits/stdc++.h>
using namespace std;
void rotateArrayByOne(vector<int> &arr, int n)
{
    int temp = arr[n - 1];
    for (int i = n - 1; i > 0; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[0] = temp;
}

void rotateArrayByD(vector<int> &arr, int d, int n)
{
    vector<int> temp;
    d = d % n;
    for (int i = 0; i < d; i++)
        temp.push_back(arr[i]);
    for (int i = 0; i <= n - d - 1; i++)
    {
        arr[i] = arr[i + d];
    }
    int j = 0;
    for (int i = n - d; i < n; i++)
    {
        arr[i] = temp[j];
        j++;
    }
}
void rotateArrayByDOptimal(vector<int> &arr, int d, int n)
{
    reverse(arr.begin(), arr.begin() + d);
    reverse(arr.begin() + d, arr.begin() + n);
    reverse(arr.begin(), arr.begin() + n);
}
int main()
{
    vector<int> arr = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    rotateArrayByDOptimal(arr, 3, arr.size());
    for (int i : arr)
        cout << i << " ";
}