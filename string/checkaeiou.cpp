#include <bits/stdc++.h>

using namespace std;
int solve(string str,int length){
    int v=0,c=0,w=0;
    for (int i = 0; i < length; i++)
    {
        str[i]=tolower(str[i]);
    }
    for (int i = 0; i < length; i++)
    {
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
            v++;
        }
        else if((str[i]>='a'&&str[i]<='z')){
            c++;
        }
        else if(str[i]==' '){
            w++;
        }
    }
    cout << "Vowels: " << v << endl;
    cout << "Consonants: " << c << endl;
    cout << "White spaces: " << w << endl;
    return 0;

    
}

int main(){
    string str="take u forward is good";
    int length=str.length();
    solve(str,length);
    return 0;
}


