#include <bits/stdc++.h>
using namespace std;
string reverseString(int i, int n, string s)
{
    if (i >= n / 2)
        return s;
    swap(s[i], s[n - i - 1]);
    return reverseString(i + 1, n, s);
}

bool isPalindrome(int i, int n, string s)
{
    if (i >= n / 2)
        return true;
    return s[i] == s[n - i - 1] and isPalindrome(i + 1, n, s);
}
int main()
{
    string s = "jatin";
    s="nitin";
    // s = reverseString(0, s.size(), s);
    if (isPalindrome(0, s.size(), s))
    {
        cout << "Palindrome";
    }
    else
    {
        cout << "Not Palindrome";
    }
    cout << s;
}