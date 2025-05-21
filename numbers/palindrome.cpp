#include<iostream>
using namespace std;

bool palindrome(int n){
    int rev=0;
    int temp=n;
    while(n>0){
        int rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    if(temp==rev){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    int n;
    cin>>n;
    if(palindrome(n)){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
}