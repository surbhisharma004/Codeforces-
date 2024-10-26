
#include <iostream>
#include <vector>
using namespace std;
int main (){
    long long n,k,res;
    cin >> n >> k;{
        res = n/k;
        if (res & 1) cout << "YES";
        else cout << "NO";
    }

    return 0;
}
