#include<bits/stdc++.h>
using namespace std;

void printArray(int *a,int n){
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<endl;    
}

void fun(int *a,int n){
    int A[n];
    int p1=0,p2=1;
    
    for(int i=0;(i<n && p1<n);i++){
        if(a[i]>0){
            A[p1]=a[i];
            p1=p1+2;
        }
    }
    for(int i=0;(i<n && p2<n);i++){
        if(a[i]<=0){
            A[p2]=a[i];
            p2=p2+2;
        }
    }
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
