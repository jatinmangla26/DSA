#include <bits/stdc++.h>
using namespace std;
void sort012(int arr[], int n)
{
    int low = 0;
    int mid = 0;
    int high = n - 1;
    while (mid <= high)
    {
        if (arr[mid] == 0)
        {
            swap(arr[mid], arr[low]);
            low++;
            mid++;
        }
        else if (arr[mid] == 2)
        {
            swap(arr[mid], arr[high]);
            high--;
        }
        else
            mid++;
    }
}
int main()
{
    int N = 5;
    int arr[] = {0, 2, 1, 2, 0};
    sort012(arr, N);
    for (int i = 0; i < N; i++)
        cout << arr[i] << " ";
}