#include <iostream>
#include <vector>
#include <string>
#include <set>
using namespace std;

int main(){
    string str;
    cin >> str;

    set<char> st;
    for(char ch : str) st.insert(ch);

    if(st.size() % 2 != 0) cout << "IGNORE HIM!" ;
    else cout << "CHAT WITH HER!"; 

    return 0;
}
