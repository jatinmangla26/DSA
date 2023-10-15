#include <bits/stdc++.h>
using namespace std;
int removeDuplicates(vector<int> arr, int n)
{
    int i = 0;
    int j = 1;
    while (j < n)
    {
        if (arr[i] != arr[j])
        {
            arr[i + 1] = arr[j];
            i++;
        }
        j++;
    }
    return i + 1;
}
int main()
{
    vector<int> arr = {{2, 2, 2, 2, 3}};
    // arr={1, 2, 3, 4};
    cout << removeDuplicates(arr, arr.size());
}