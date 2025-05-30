#include <bits/stdc++.h>
using namespace std;


bool checkprime(int n)
{
    int cnt=0;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            cnt++;
        }
    }
    if(cnt==2)
    {
        return true;
    }
    else{
        return false;
    }
}
int main()
{
    int n;
    cin>>n;
    if(checkprime(n))
    {
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}   
