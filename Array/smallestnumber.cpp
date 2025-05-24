// Example 1 : Input : arr[] = {2, 5, 1, 3, 0};
// Output : 0 Explanation : 0 is the smallest element in the array.

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int SortArr(vector<int> &arr,int n){
    int min=arr[0];
    for(int i=0;i<n;i++){
        if(min>arr[i]){
            min=arr[i];
        }
    }
    return min;
}

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<SortArr(arr,n);
    return 0;
}

// Time Complexity : O(N)

// Space Complexity : O(1)