#include <iostream>

using namespace std;
// Function to print array
void printArray(int arr[], int n)
{
    cout << "The reversed array is:- " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}


void reverseArray(int arr[], int n)
{
 int start=0,end=n-1;
 while(start<end){
    swap(arr[start],arr[end]);
    start++;
    end--;
 }
 printArray(arr,n);

}

int main(){
    int n=5;
    int arr[]={5,4,3,2,1};
    reverseArray(arr,n);
}
