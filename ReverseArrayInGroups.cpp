#include<bits/stdc++.h>
using namespace std;

void printArray(int *a,int n){
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<endl;    
}

void fun(int *a,int n,int k){
    int i=0,j=k;
    while(j<=n){
        reverse(a+i,a+j);
        i=j;
        j=j+k;
    }
    if(j!=n)//if j exceed n
        reverse(a+i,a+n);
    printArray(a,n);    
}

int main()
 {
	int t;
	cin>>t;
	while(t--){
	    int n,k;
	    cin>>n>>k;
	    int a[n];
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	    fun(a,n,k);
	}
	return 0;
}
