#include<iostream>
using namespace std;
int main() {
    long long n,q,a,b,answer;
	cin>>n>>q;
	while(q--) { 
	    int total;
		cin>>a>>b;
		answer = (a-1)*n + b + 1;
		if((a + b) % 2)
		    answer += n * n;
		total = answer/2;
		cout<<total<<endl;
	}
}

