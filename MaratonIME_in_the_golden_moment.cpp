//Daily Challenge 18
#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int A[n];
    for(int i = 1 ;i <= n; i++) {
        cin >> A[i];
    }
    int sum = 0;
    if(n == 2) {
        cout<<A[1]*A[2];
    }
    else if(n != 2){
    for(int i = 1 ;i <= n; i += 2)
        sum += A[i]*A[i+1]; 
    int product = 1;
    for(int i = 1 ;i <= n; i++)
        product *= A[i];
    int ans = product - sum + 1;
    cout<<ans;
    
    }
    return 0;

}
