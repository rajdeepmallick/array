#include<bits/stdc++.h>
using namespace std;

void printArray(int *a,int n){
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<endl;    
}

void revAlgo(int *a,int n,int d){
    reverse(a,a+d);
    reverse(a+d,a+n);
    reverse(a,a+n);
    printArray(a,n);
}

int main()
 {
	int t;
	cin>>t;
	while(t--){
	    int n,d;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	    cin>>d;     
	    revAlgo(a,n,d);     
	}
	return 0;
}
