
#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    if(n == m){
        cout << 0;
        return 0;
    }

    if(m % n != 0){
        cout << -1 ;
        return 0;
    }

    int d = m/n;

    int count = 0;
    while(d % 2 == 0) {
        d /= 2;
        count++;
    }

    while(d % 3 == 0){
        d /= 3;
        count++;
    }

    if(d != 1) cout << -1 ;
    else cout << count ;
    return 0;
}
