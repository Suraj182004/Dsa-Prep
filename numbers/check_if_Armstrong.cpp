#include <bits/stdc++.h>
using namespace std;

bool isArmstrong(int n){
    int k=to_string(n).length();
    int sum=0;
    int temp=n;
    while(n>0){
        int rem=n%10;
        sum+=pow(rem,k);
        n/=10;
    
    }
    return sum==temp?true:false;


}

int main(){
    int n;
    cin>>n;
    cout<<isArmstrong(n);
    return 0;

}