#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>
using namespace std;

int main(){
    string word;
    cin >> word;

    int up = 0, low = 0;
    for(char ch : word){
        if(ch >= 'A' && ch <= 'Z') up++;
        else if(ch >= 'a' && ch <= 'z') low++;
    }

    if(up > low){
        transform(word.begin(), word.end(), word.begin(), ::toupper);
        cout << word ;
    }else{
        transform(word.begin(), word.end(), word.begin(), ::tolower);
        cout << word ;
    }
    return 0;
}
