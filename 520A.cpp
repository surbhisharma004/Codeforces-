#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <set>
using namespace std;

int main()
{
    int len;
    cin >> len;
    string s;
    set<char> set;
    cin >> s;

    for(int i=0; i<len; i++){
        if (s[i] >= 'A' && s[i] <= 'Z') s[i] += 'a' - 'A';
        set.insert(s[i]);
    }
    if(set.size()==26) cout<<"YES";
    else cout<<"NO";
    return 0;
}
