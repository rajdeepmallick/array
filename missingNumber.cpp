#include<bits/stdc++.h>
using namespace std;

int missing(int *a,int n){
    int x1=a[0];
    int x2=1;
    
    for(int i=1;i<(n-1);i++){
        x1=x1^a[i];
    }
    
    for(int i=2;i<=n;i++){
        x2=x2^i;
    }
    
    return (x1^x2);
}

int main()
 {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int a[n-1];
	    for(int i=0;i<(n-1);i++)
	        cin>>a[i];
	    cout<<missing(a,n)<<endl;     
	}
	return 0;
}

//https://www.geeksforgeeks.org/find-the-missing-number/
