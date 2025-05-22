// Input : 8 7 1 6 5 9 Output : 1 5 6 9 8 7
//  Explanation : First three elements are in the ascending order and next three elements are in the descending order.


#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    vector<int>arr={8,7,6,5,4,2,6};
    int n=arr.size();
    sort(arr.begin(),arr.end());
    for (int i = 0; i < n / 2; i++)
    {
        cout << arr[i] << " ";
    }
    for (int i = n - 1; i >= n / 2; i--)
    {
        cout << arr[i] << " ";
    }
    return 0;

}