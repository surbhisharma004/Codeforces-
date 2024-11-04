#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    string table;
    cin >> table;

    vector<string> hand(5);
    for(int i=0;i<5;i++) cin >> hand[i];

    bool flag = false;
    for(string s : hand){
        if(s[0] == table[0] || s[1] == table[1]){
            flag = true;
            break;
        }
    }

    if(flag) cout << "YES" ;
    else cout << "NO";

    return 0;
}
