/*The program is find the distinct words formed with the letters given .*/ 

#include<bits/stdc++.h>
using namespace std ;
int main()
{
    string S;
    getline(cin,S);
    int count = S.size() ;
    int sum = 0;
    sum = ((count+1)*26 - count);
    cout<<sum;
    return 0;
}
