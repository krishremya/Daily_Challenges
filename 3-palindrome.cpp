#include<bits/stdc++.h>
using namespace std;
int main() {
    long long c;
    cin>>c;
    if(c == 1) {
        cout<< "a"<<"\n";
    } else if(c == 2) {
        cout<<"ab"<<"\n";
    } else {
        string str = "ab";
        for(int i = 2; i < c; i++ ) {
            if(str[i-2] == 'a') {
                str += 'b';
            } else {
                str += 'a';
            }
        }
        cout<<str;
    }
    return 0;
}
