// Example 1 : Input : min = 10, max = 50 
// Output : 11 22 33 44 Explanation : 11, 22, 33, 44 will remain the same when they read from forward or backward.

#include <iostream>
using namespace std;

bool isPalindrome(int n){
    int rev = 0;
    int temp = n;
    while (n>0){
        int rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }
    if (temp == rev){
        return true;
    }
    else{
        return false;
    }
}

int main()
{
    int min = 100;
    int max = 200;
    for (int i = min; i <= max; i++)
    {
        if (isPalindrome(i))
        {
            cout << i << " ";
        }
    }
    return 0;
}