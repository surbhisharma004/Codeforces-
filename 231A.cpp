#include <iostream>
using namespace std;

int main(){
    int n;
    int result = 0;
    cin>>n;

    for(int i=0; i<n; i++){
        int a,b,c;
        int s = 0;
        cin >> a >> b >> c;

        if(a == 1) s++;
        if(b == 1) s++;
        if(c == 1 ) s++;

        if(s>= 2) result++;
        
    }

    cout << result;
    return 0;
}
