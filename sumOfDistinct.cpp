#include<bits/stdc++.h>
using namespace std;

int sumOfArray(int *a,int n){
    sort(a,a+n);
    int sum=0;
    for(int i=0;i<n-1;i++){
        if(a[i]!=a[i+1]){
            sum=sum+a[i];
        }
    }
    sum=sum+a[n-1];
    return sum;
}

/*
int sumOfArray(int *a,int n){
    unordered_set<int>s;
    unordered_set<int>::iterator it;
    for(int i=0;i<n;i++)
        s.insert(a[i]);
    int sum=0;    
    for(it=s.begin();it!=s.end();it++)
        sum=sum+*it;
    return sum;    
}
*/

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
	        
	    cout<<sumOfArray(a,n)<<endl;     
	}
	return 0;
}
