
#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
using namespace std;

int main(){
    vector<int> arr(4);
    for(int i=0;i<4;i++) cin >> arr[i];

    map<int, int> mp;
    for(int i=0;i<4;i++) mp[arr[i]]++;

    int result = 0;
    for(auto it : mp){
        if(it.second > 1) result += it.second - 1;
    }

    cout << result ;
    return 0;
}
