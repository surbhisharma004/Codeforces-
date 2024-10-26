#include <bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin>>str;
    int z=0;
    int l=str.length();
    for(int i=0;i<l;i++){
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u') z++;
        else if(str[i]=='1' || str[i]=='3' || str[i]=='5' || str[i]=='7' || str[i]=='9') z++;
    }
    cout<<z ;
    return 0;
}
