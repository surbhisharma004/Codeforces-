#include <iostream>
using namespace std;

int main(){
    long long m,n,t,b,c,d,i,j,k,x,y,z,l,q,r;
    long long cnt=0,res=0;
    cin>>x>>y>>l>>r;

    k=y+r;
    z=max( x, l);
    res= ( k+2)*2 + z*2;

    cout << res ;
    return 0;
}
