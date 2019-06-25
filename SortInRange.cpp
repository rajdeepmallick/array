#include<bits/stdc++.h>
using namespace std;

void printArray(int *a,int n){
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<endl;    
}

void fun(int *a,int n){
    int A[n],j=0,k;
    for(int i=0;i<n;i++){
        if(a[i]%2!=0)
            A[j++]=a[i];
    }
    k=j;
    for(int i=0;i<n;i++){
        if(a[i]%2==0)
            A[j++]=a[i];
    }
    sort(A,A+k,greater<int>());
    sort(A+k,A+n);
    printArray(A,n);
}

int main()
 {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	    fun(a,n);     
	}
	return 0;
}
