#include <iostream>
using namespace std;
int main() {
    int m, n;
    cin>>n>>m;
    int A[n];
    for(int i = 0; i < n ; i++) {
        cin>> A[i];
    }
    int pos = 0, flag = 1;
    do {
        flag = 0;
        for(int i =0 ;i < n ;i++) {
            if(A[i]!=0) {
                if(A[i] < m) {
                    A[i] = 0;
                } else
                    A[i] -= m;
                pos = i;
                flag = 1;
            }
        }
        if(flag == 0) {
            break;
        } 
    }while(1);
    cout<<pos + 1;
    return 0;
}
