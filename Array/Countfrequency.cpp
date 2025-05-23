// Example 1 : Input : arr[] = {10, 5, 10, 15, 10, 5};
// Output : 10 3 5 2 15 1 Explanation : 10 occurs 3 times in the array 5 occurs 2 times in the array 15 occurs 1 time in the array

#include <bits/stdc++.h>
using namespace std;

void Frequency(int arr[], int n)
{
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[arr[i]]++;
    }
    for (auto x : mp)
    {
        cout << x.first << " " << x.second <<endl;
    }
}

int main()
{
    int arr[] = {10, 5, 10, 15, 10, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    Frequency(arr, n);
    return 0;

}