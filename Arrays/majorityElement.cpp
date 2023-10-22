#include <bits/stdc++.h>
using namespace std;
int majorityElement(int a[], int size)
{
    int count = 1;
    int ans = a[0];
    for (int i = 1; i < size; i++)
    {
        if (a[i] == ans)
            count++;
        else
        {
            count--;
            if (count == 0)
            {
                ans = a[i];
                count = 1;
            }
        }
    }
    count = 0;
    for (int i = 0; i < size; i++)
    {
        if (a[i] == ans)
            count++;
    }
    return  (count > size / 2) ? ans : -1;
}
int main()
{
}