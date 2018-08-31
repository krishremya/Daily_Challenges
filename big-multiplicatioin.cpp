#include <iostream>
using namespace std;
int main(){
    int t;
    cin>> t;
    long int rem = 0 ;
    long int m, n;
    long int pro = 0;
    for(int i =0 ; i < t; i++){
        cin>>m>>n;
        pro = m* n;
        rem = pro%3;
        cout<<rem;
        cout<<"\n";
    }

    return 0;

}
