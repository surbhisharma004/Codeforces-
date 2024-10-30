#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;

    string str = "";
    int curr = 1;

    while (str.length() < n) {
        str += to_string(curr);
        curr++;
    }

    cout << str[n - 1] ;

    return 0;
}
