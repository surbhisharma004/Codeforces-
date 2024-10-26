#include <iostream>
#include <vector>
using namespace std;
int main(){
    int x,y;
    cin>>x>>y;
    int c = 0;
    bool flag = true;
    while(flag){
        x*= 3; y*= 2;
        if(x>y) flag = false;
        c++;
    }
    cout<<c;
    return 0;
}
