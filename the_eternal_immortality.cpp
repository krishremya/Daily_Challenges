#include<bits/stdc++.h>
using namespace std;
int fact(int n) {
    int fact = 1;
    for(int i = 1; i <= n ; i++) {
        fact = fact*i;
    }
    return fact;
}
int main() {
    int a, b;
    cin>> a >> b;
    if(b > a) {
        int af = fact(a);
        int bf = fact(b);
        int div = bf/af;
    }
    while (div > 0) {
        div = div%10;
        div = div/10;
    }
    cout<< div;
}
