#include<bits/stdc++.h>
using namespace std;

bool check(int64_t n){
    int64_t N=n,c=0,num=0,i=0;
    
    while(N>0){
        c++;
        N=N/10;
    }
    N=n*n*n;
    while(c--){
        num=num+(N%10)*pow(10,i);
        i++;
        N=N/10;
    }
    return (num==n);
}

int main()
 {
	int t;
	cin>>t;
	while(t--){
	    int64_t n;
	    cin>>n;
	    cout<<check(n)<<endl;
	}
	return 0;
}
