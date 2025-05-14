#include <iostream>
#include <math.h>
using namespace std;

bool checkprime(int n){
    if(n==1)
        return false;
    int i=2;
    for (i = 2; i < sqrt(n); i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

void PrintPrimesbwrange(int a, int b)
{
    for (int i = a; i <= b; i++)
    {
        if (checkprime(i))
        {
            cout << i << " ";
        }
    }
}

int main(){
    int a,b;
    cin>>a>>b;
    PrintPrimesbwrange(a,b);
    cout<<endl;
    return 0;

}