#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> arr(n);
    int maxi = 0;
    long long result = 0;
    for(int i=0;i<n;i++){
        cin >> arr[i];
        maxi = max(maxi, arr[i]);
    }

    for(int i=0;i<n;i++) result += maxi - arr[i];
    cout << result;
    return 0;
}
