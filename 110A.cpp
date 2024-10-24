#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    int s=0;
    cin>>n;
    while(n>0)
    {
        int ld=n%10;
        if(ld==4||ld==7)
        s++;
        n=n/10;
    }
    if(s==4||s==7)
    cout<<"YES";
    else
    cout<<"NO";
    return 0;
}

